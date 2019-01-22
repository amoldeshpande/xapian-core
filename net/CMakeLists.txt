
target_sources(libxapian
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/length.h
	${CMAKE_CURRENT_LIST_DIR}/progclient.h
	${CMAKE_CURRENT_LIST_DIR}/remoteconnection.h
	${CMAKE_CURRENT_LIST_DIR}/remoteprotocol.h
	${CMAKE_CURRENT_LIST_DIR}/remoteserver.h
	${CMAKE_CURRENT_LIST_DIR}/remotetcpclient.h
	${CMAKE_CURRENT_LIST_DIR}/remotetcpserver.h
	${CMAKE_CURRENT_LIST_DIR}/replicatetcpclient.h
	${CMAKE_CURRENT_LIST_DIR}/replicatetcpserver.h
	${CMAKE_CURRENT_LIST_DIR}/resolver.h
	${CMAKE_CURRENT_LIST_DIR}/serialise.h
	${CMAKE_CURRENT_LIST_DIR}/serialise-error.h
	${CMAKE_CURRENT_LIST_DIR}/tcpclient.h
	${CMAKE_CURRENT_LIST_DIR}/tcpserver.h
	${CMAKE_CURRENT_LIST_DIR}/length.cc
	${CMAKE_CURRENT_LIST_DIR}/serialise.cc)

if( BUILD_BACKEND_REMOTE)
target_sources(libxapian
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/progclient.cc
	${CMAKE_CURRENT_LIST_DIR}/remoteconnection.cc
	${CMAKE_CURRENT_LIST_DIR}/remoteserver.cc
	${CMAKE_CURRENT_LIST_DIR}/remotetcpclient.cc
	${CMAKE_CURRENT_LIST_DIR}/remotetcpserver.cc
	${CMAKE_CURRENT_LIST_DIR}/replicatetcpclient.cc
	${CMAKE_CURRENT_LIST_DIR}/replicatetcpserver.cc
	${CMAKE_CURRENT_LIST_DIR}/serialise-error.cc
	${CMAKE_CURRENT_LIST_DIR}/tcpclient.cc
	${CMAKE_CURRENT_LIST_DIR}/tcpserver.cc)
endif()
