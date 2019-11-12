#property copyright "Rostislav Kuratch"
#property link "rostislav.kuratch@gmail.com"

#import "postgremql5.dll"

string pmql_connect(string host, string port, string user, string pass, string db);
string pmql_disconnect();

long pmql_begin_transaction();
string pmql_commit(long trans_ptr);
string pmql_rollback(long trans_ptr);

string pmql_exec_in_transaction(long trans_ptr, string query);
string pmql_exec(string query);

void pmql_delimiters(int val_delim, int col_delim, int row_delim);
void pmql_set_cache_size(int max_cache_size);

#import
