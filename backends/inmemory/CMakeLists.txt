target_sources(libxapian
	PRIVATE
	backends/inmemory/inmemory_positionlist.h)

if( BUILD_BACKEND_INMEMORY)
target_sources(libxapian
	PRIVATE
	backends/inmemory/inmemory_alltermslist.h
	backends/inmemory/inmemory_database.h
	backends/inmemory/inmemory_document.h
	backends/inmemory/inmemory_alltermslist.cc
	backends/inmemory/inmemory_database.cc
	backends/inmemory/inmemory_document.cc
	backends/inmemory/inmemory_positionlist.cc)
else()
# Xapian::Document uses MapTermList which uses InMemoryPositionList so we
# always need "inmemory_positionlist.cc".
target_sources(libxapian
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/inmemory_positionlist.cc)
endif()
