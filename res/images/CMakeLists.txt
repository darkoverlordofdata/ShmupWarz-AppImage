### CMakeLists automatically created with AutoVala
### Do not edit

IF(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/)
	install(DIRECTORY
		${CMAKE_CURRENT_SOURCE_DIR}/
	DESTINATION
		share/shmupwarz/images
	)
ELSE()
	install(FILES
		${CMAKE_CURRENT_SOURCE_DIR}/
	DESTINATION
		share/shmupwarz/images
	)
ENDIF()

