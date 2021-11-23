#############################################################################
# Makefile for building: RobloxStudio.app/Contents/MacOS/RobloxStudio
# Generated by qmake (2.01a) (Qt 4.7.0) on: Fri Mar 18 14:27:44 2011
# Project:  RobloxStudio.pro
# Template: app
# Command: /usr/bin/qmake -spec /usr/local/Qt4.7/mkspecs/macx-xcode -o RobloxStudio.xcodeproj/project.pbxproj RobloxStudio.pro
#############################################################################

MOC       = /Developer/Tools/Qt/moc
UIC       = /Developer/Tools/Qt/uic
LEX       = flex
LEXFLAGS  = 
YACC      = yacc
YACCFLAGS = -d
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
INCPATH       = -I/usr/local/Qt4.7/mkspecs/macx-xcode -I. -I/Library/Frameworks/QtCore.framework/Versions/4/Headers -I/usr/include/QtCore -I/Library/Frameworks/QtGui.framework/Versions/4/Headers -I/usr/include/QtGui -I/usr/include -I. -I/usr/local/include -I/System/Library/Frameworks/CarbonCore.framework/Headers -F/Library/Frameworks
DEL_FILE  = rm -f
MOVE      = mv -f

IMAGES = 
PARSERS =
preprocess: $(PARSERS) compilers
clean preprocess_clean: parser_clean compiler_clean

parser_clean:
check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compilers: ./moc_mainwindow.cpp ./qrc_RobloxStudio.cpp
compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_moc_header_make_all: moc_mainwindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp
moc_mainwindow.cpp: mainwindow.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ mainwindow.h -o moc_mainwindow.cpp

compiler_rcc_make_all: qrc_RobloxStudio.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_RobloxStudio.cpp
qrc_RobloxStudio.cpp: RobloxStudio.qrc
	/Developer/Tools/Qt/rcc -name RobloxStudio RobloxStudio.qrc -o qrc_RobloxStudio.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean 

