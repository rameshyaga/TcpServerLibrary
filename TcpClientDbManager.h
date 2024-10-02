#ifndef __TcpClientDbManager__
#define __TcpClientDbManager__

class TcpClient;
class TcpServiceController;

class TcpClientDbManager {
      private:
        std::list<TcpClient *>tcp_client_db;

      public:
        TcpServerContoller *tcp_ctrlr;

        TcpClientDbManager (TcpServerContoller *);
        ~TcpClientDbManager ();
};

#endif /* __TcpClientDbManager__ */
