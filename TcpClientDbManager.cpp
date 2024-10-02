#include <TcpClientDbManager.h>

TcpClientDbManager::TcpClientDbManager(TcpServerController *tcp_ctrlr) {
        this->tcp_ctrlr = tcp_ctrlr;
}

TcpClientDbManager::~TcpClientDbManager() {
}

