if(UNIX)
  include_directories("${CONTRIB_PATH}/TBB/tbb_mac_30_056/include")
elseif(WIN32)
  include_directories("${CONTRIB_PATH}/TBB/tbb_win_30_056/include")
else()
  message(FATAL_ERROR "No tbb directory set on this platform.")
endif()
