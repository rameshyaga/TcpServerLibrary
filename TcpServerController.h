#ifndef __TcpServerController__
#define __TcpServerController__

#include <stdint.h> /* For uint32_t/uint16_t */
#include <string>

class TcpNewConnectionAcceptor;
class TcpClientDbManager;
class TcpClentServerManager;

class TcpServerController {
      private:
        TcpNewConnectionAcceptor *tcp_new_conn_acc;
        TcpClientDbManager *tcp_client_db_mgr;
        TcpClentServerManager *tcp_client_svc_mgr;

      public:
        uint32_t ip_addr;
        uint16_t port_no;
        std::string name;

        /* Construtors & Destructors */
        TcpServerController (std::string ip_addr,
            uint16_t port_no, string name);
        ~TcpServerController ();

        void start();
        void stop;
}
#endif /* __TcpServerController__ */


