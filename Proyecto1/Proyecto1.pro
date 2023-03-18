QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AST/nodo.cpp \
    Abstract/expression.cpp \
    Abstract/instruccion.cpp \
    Abstract/retorno.cpp \
    Expresiones/aritmetica.cpp \
    Expresiones/identificador.cpp \
    Expresiones/incremento.cpp \
    Expresiones/literal.cpp \
    Instrucciones/asignacion.cpp \
    Instrucciones/declaracion.cpp \
    Instrucciones/funcion_main.cpp \
    Instrucciones/incrementoins.cpp \
    Instrucciones/lista_instrucciones.cpp \
    Instrucciones/print.cpp \
    ParserCtx.cpp \
    Symbols/environment.cpp \
    Symbols/symbol.cpp \
    lexer.yy.c \
    main.cpp \
    mainwindow.cpp \
    parser.cpp \
    patron_singleton/singleton.cpp

HEADERS += \
    AST/nodo.hpp \
    Abstract/expression.hpp \
    Abstract/instruccion.hpp \
    Abstract/retorno.hpp \
    Expresiones/aritmetica.hpp \
    Expresiones/identificador.hpp \
    Expresiones/incremento.hpp \
    Expresiones/literal.hpp \
    Instrucciones/asignacion.hpp \
    Instrucciones/declaracion.hpp \
    Instrucciones/funcion_main.hpp \
    Instrucciones/incrementoins.hpp \
    Instrucciones/lista_instrucciones.hpp \
    Instrucciones/print.hpp \
    ParserCtx.hpp \
    Symbols/ArithmeticOption.h \
    Symbols/environment.hpp \
    Symbols/symbol.hpp \
    Symbols/type.h \
    location.hh \
    mainwindow.h \
    parser.hpp \
    patron_singleton/singleton.hpp \
    position.hh \
    stack.hh

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    lexer.l \
    parser.y
