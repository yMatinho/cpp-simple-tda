#include "Connector.h"
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/statement.h>

Connector::Connector(string host,
                     int port,
                     string database,
                     string username,
                     string password)
{
    this->host = host;
    this->port = port;
    this->database = database;
    this->username = username;
    this->password = password;
}

Connector *Connector::get()
{
    static Connector *instance = new Connector();
    return instance;
}

sql::Connection *Connector::connect()
{
    if (this->conn != nullptr)
        return this->conn;
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;

    driver = sql::mysql::get_mysql_driver_instance();
    const string connectionString = this->host.append(":").append(to_string(this->port)).append("/").append(this->database);
    this->conn = driver->connect(connectionString, this->username, this->password);
    return this->conn;
}

sql::Statement *Connector::createStatement()
{
    return this->connect()->createStatement();
}