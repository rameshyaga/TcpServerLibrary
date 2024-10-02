#ifndef __TcpClientServiceManager__
#define __TcpClientServiceManager__ 

class TcpClient;
class TcpServerController;

class TcpClientServiceManager {
      private:
        std::list<TcpClient *>tcp_client_db;

      public:
        TcpServerController *tcp_ctrlr;

        TcpClientServiceManager(TcpServerController *);
        ~TcpClientServiceManager();
};

#endif /* __TcpClientServiceManager__ */
