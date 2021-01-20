TEMPLATE = subdirs
CONFIG+=ordered
SUBDIRS += \
    common \
    server
    #deliveries

include(deliveries/deliveries.pro)

#OTHER_FILES += deliveries\deliveries.pri
