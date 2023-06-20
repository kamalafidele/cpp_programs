#include <iostream>
// Headers for strings
#include <string>
#include <sstream>

// Header for dealing with vectors
#include <vector>
#include <bits/stdc++.h>
#include <fstream>

// Headers for mysql database
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>

using namespace std;

sql::Connection* connectDatabase() {
    
    sql::Connection *conn;
    sql::mysql::MySQL_Driver *driver;

    driver = sql::mysql::get_mysql_driver_instance();
    conn = driver->connect("tcp://127.0.0.1:3306", "root", "2352003");

    // Select the database
    conn->setSchema("data_structures");

    return conn;
}

void insertData(string query, sql::Statement *statement) {
    statement->execute(query);
}

sql::ResultSet* getData(string query, sql::Statement *statement) {
    sql::ResultSet *result = statement->executeQuery(query);
    return result;
}

int main() {
    try {
        sql::Connection *con = connectDatabase();
        sql::Statement *stmt = con->createStatement();

        sql::ResultSet *result;
        string username = "Mugisha";
        string password = "Erick";
        string insertQuery = "INSERT INTO users (username, password) VALUES ('" + username + "', '" + password + "')";
        insertData(insertQuery, stmt);

        string selectQuery = "SELECT * FROM users;";
        result = getData(selectQuery, stmt);

        while(result->next()) {
            cout << "Id: " << result->getInt("id") <<endl;
            cout << "Username: " << result->getString("username") <<endl;
            cout << "Password: " << result->getString("password") <<endl;
        }

        delete stmt;
        delete con;
    } catch (sql::SQLException &e) {
        std::cerr << "SQL Exception: " << e.what() << std::endl;
        std::cerr << "MySQL error code: " << e.getErrorCode() << std::endl;
    } catch (std::runtime_error &e) {
        std::cerr << "Runtime error: " << e.what() << std::endl;
    }
    return 0;
}