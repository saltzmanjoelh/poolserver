#ifndef SERVER_DATABASE_ENV_H_
#define SERVER_DATABASE_ENV_H_

#include "DatabaseWorkerPool.h"

enum ServerSTMT
{
    STMT_QUERY_TEST_TABLE,
    STMT_INSERT_SHIT
};

class ServerDatabaseWorkerPoolMySQL : public MySQL::DatabaseWorkerPool
{
    void LoadSTMT()
    {
        PrepareStatement(STMT_QUERY_TEST_TABLE, "SELECT * FROM `test_table`", MySQL::STMT_BOTH);
        PrepareStatement(STMT_INSERT_SHIT, "INSERT INTO `test_table` VALUES (?, ?, ?)", MySQL::STMT_BOTH);
    }
};

extern ServerDatabaseWorkerPoolMySQL sDatabase;

#endif
