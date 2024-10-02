CC=g++
CFLAGS=-g
TARGET:testapp.exe
LIBS=-lpthread
OBJS=TcpClientDBManager.o        \
     TCPClientServerManager.o    \
     TcpNewConnectionAcceptor.o  \
     TcpServerController.o       \
     network_utils.o

testapp.exe:testapp.o ${OBJS}
  ${CC} ${CFLAGS} ${OBJS} testapp.o -o testapp.exe ${LIBS}

testapp.o:testapp.cpp
  ${cc} ${CFAGS} -c testapp.cpp -o testapp.o

TcpClientDBManager.o:TcpClientDBManager.cpp
  ${cc} ${CFAGS} -c TcpClientDBManager.cpp -o TcpClientDBManager.o

CPClientServerManager.o:CPClientServerManager.cpp
  ${cc} ${CFAGS} -c CPClientServerManager.cpp -o CPClientServerManager.o

TcpNewConnectionAcceptor.o:TcpNewConnectionAcceptor.cpp
  ${cc} ${CFAGS} -c TcpNewConnectionAcceptor.cpp -o TcpNewConnectionAcceptor.o

TcpServerController.o:TcpServerController.cpp
  ${cc} ${CFAGS} -c TcpServerController.cpp -o TcpServerController.o

network_utils.o:network_utils.cpp
  ${cc} ${CFAGS} -c network_utils.cpp -o network_utils.o

clean:
  rm -f *.o
  rm -f *.exe
