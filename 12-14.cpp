struct destination;
struct connection;
connection connect(destination*);
void disconnect(connection);
void end_connection(connection *p) { disconnect(*p); }


void f1 (destination &d /* other parameters */) {
    connection c = connect(&d);
    // use the connection
    disconnect(connection);
}

void f2 (destination &d /* other parameters */) {
    connection c = connect(&d);
    shared_ptr<connection> p(&c, end_connection);
}
