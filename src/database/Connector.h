#include "../config.h"
#include "string"
#include <mysql_connection.h>


using namespace std;

class Connector
{
private:
    string host;
    int port;
    string database;
    string username;
    string password;

    sql::Connection *conn;

public:
    Connector(string host = Constants::MYSQL_HOST,
              int port = Constants::MYSQL_PORT,
              string database = Constants::MYSQL_DATABASE,
              string username = Constants::MYSQL_USER,
              string password = Constants::MYSQL_PASSWORD);

    static Connector *get();
    sql::Connection *connect();
    sql::Statement *createStatement();
};