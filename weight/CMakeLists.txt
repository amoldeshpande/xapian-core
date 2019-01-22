
target_sources(libxapian PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/weightinternal.h
	${CMAKE_CURRENT_LIST_DIR}/bb2weight.cc
	${CMAKE_CURRENT_LIST_DIR}/bm25plusweight.cc
	${CMAKE_CURRENT_LIST_DIR}/bm25weight.cc
	${CMAKE_CURRENT_LIST_DIR}/boolweight.cc
	${CMAKE_CURRENT_LIST_DIR}/coordweight.cc
	${CMAKE_CURRENT_LIST_DIR}/dlhweight.cc
	${CMAKE_CURRENT_LIST_DIR}/dphweight.cc
	${CMAKE_CURRENT_LIST_DIR}/ifb2weight.cc
	${CMAKE_CURRENT_LIST_DIR}/ineb2weight.cc
	${CMAKE_CURRENT_LIST_DIR}/inl2weight.cc
	${CMAKE_CURRENT_LIST_DIR}/lmweight.cc
	${CMAKE_CURRENT_LIST_DIR}/pl2plusweight.cc
	${CMAKE_CURRENT_LIST_DIR}/pl2weight.cc
	${CMAKE_CURRENT_LIST_DIR}/tfidfweight.cc
	${CMAKE_CURRENT_LIST_DIR}/tradweight.cc
	${CMAKE_CURRENT_LIST_DIR}/weight.cc
	${CMAKE_CURRENT_LIST_DIR}/weightinternal.cc)
