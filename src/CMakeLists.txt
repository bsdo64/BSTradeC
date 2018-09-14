set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Don't find each Qt module one by one with:
#
#find_package(Qt5Widgets)
#find_package(Qt5Gui)
#find_package(Qt5Core)

#Add them all with one call:
#
find_package(Qt5 COMPONENTS Core Widgets Network REQUIRED)

#Widgets is enough since Qt's package files handle dependencies. Add REQUIRED to ensure packages are found.
message(${Qt5Widgets_VERSION})

set(BSTrade_SRCS
        main.cpp

        View/icons.qrc

        View/mainwindow.cpp
        View/mainwindow.h
        )
#set  (BSTrade_Headers )
set  (BSTrade_Forms
        View/mainwindow.ui)

add_executable(BSTradeC ${BSTrade_SRCS} ${BSTrade_Forms})
target_link_libraries(BSTradeC Qt5::Core Qt5::Widgets Qt5::Network )