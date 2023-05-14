let srt = "abcddcbd";

// console.log(srt.substring(0,3))

function getMaxScore(jewels) {
    // Write your code here
    let score = 0;
    for(let i = 0; i < jewels.length; i++) {
         if(jewels[i] == jewels[i + 1]) {
             let subStr = jewels.substring(i,jewels.length);
             for(let j = 0; j < subStr.length; j++){
                 if(subStr[j] != jewels[i]){
                     jewels = jewels.substring(0,i) + subStr.substring(j,subStr.length);
                     score += 1;
                     i = 0;
                     break;
                 }
             }
         } 

    }

   return score;
}

let me = "abannaba";
let trick = "junnukkja";
console.log(getMaxScore(me));