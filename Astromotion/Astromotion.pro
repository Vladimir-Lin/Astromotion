QT          += core
QT          += gui
QT          += widgets
QT          += opengl

# CONFIG      += console

TARGET       = Astromotion
TEMPLATE     = app

DEFINES     += QT_DEPRECATED_WARNINGS

include ($${PWD}/../Version.txt)
include ($${PWD}/Linear/Linear.pri)
include ($${PWD}/Physics/Physics.pri)

SOURCES     += $${PWD}/Astromotion.cpp

HEADERS     += $${PWD}/Astromotion.hpp

FORMS       += $${PWD}/Astromotion.ui

OTHER_FILES +=

win32 {
LIBS        += -lopengl32
LIBS        += -lglu32
}
