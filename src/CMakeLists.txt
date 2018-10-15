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
find_package(Qt5 COMPONENTS Core Widgets Network Test REQUIRED)

#Widgets is enough since Qt's package files handle dependencies. Add REQUIRED to ensure packages are found.
message(${Qt5Widgets_VERSION})

set(BSTrade_SRCS
        main.cpp

        App/ExchangeSelector.cpp
        App/ExchangeSelector.h
        App/MainWindow.cpp

        )
#set  (BSTrade_Headers )
set  (BSTrade_Forms
        App/MainWindow.ui
        App/ExchangeSelector.ui
        )

qt5_wrap_ui(QT_UI_SRCS ${BSTrade_Forms})

add_executable(BSTradeC ${BSTrade_SRCS} ${QT_UI_SRCS})
target_link_libraries(BSTradeC Qt5::Core Qt5::Widgets Qt5::Network Qt5::Test)