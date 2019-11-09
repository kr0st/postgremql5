/* Distributed under the MIT license     *
 * Copyright (c) 2019, Rostislav Kuratch *
 * All rights reserved.                  */

#pragma once

#include "db_wrapper_interface.h"

class Postgres_DB_Wrapper: public DB_Wrapper_Interface
{
    public:

        Postgres_DB_Wrapper();
        virtual ~Postgres_DB_Wrapper();

        std::string connect(const std::string& connection_string);

        __int64 begin_transaction();
        std::string commit(const __int64 trans_ptr);
        std::string rollback(const __int64 trans_ptr);

        std::string exec(const __int64 trans_ptr, const std::string& query);
        std::string exec(const std::string& query);
        std::string disconnect();


    private:

        pqxx::connection* db_connection_;
        std::vector<pqxx::work*> transactions_;

        void rollback_existing_transactions();
        void remove_transaction(const pqxx::work* trans);
        std::string exec(pqxx::work* trans, const std::string& query);
};
