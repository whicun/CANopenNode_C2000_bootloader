/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated by CANopenEditor v4.1-2-gff637a7

    https://github.com/CANopenNode/CANopenNode
    https://github.com/CANopenNode/CANopenEditor

    DON'T EDIT THIS FILE MANUALLY, UNLESS YOU KNOW WHAT YOU ARE DOING !!!!
*******************************************************************************/

#define OD_DEFINITION
#include "301/CO_ODinterface.h"
#include "OD.h"

#if CO_VERSION_MAJOR < 4
#error This Object dictionary is compatible with CANopenNode V4.0 and above!
#endif

/*******************************************************************************
    OD data initialization of all groups
*******************************************************************************/
OD_ATTR_PERSIST_COMM OD_PERSIST_COMM_t OD_PERSIST_COMM = {
    .x1000_deviceType = 0x544F4F42,
    .x1014_COB_ID_EMCY = 0x00000080,
    .x1015_inhibitTimeEMCY = 0x0000,
    .x1017_producerHeartbeatTime = 0x1388,
    .x1018_identity = {
        .highestSub_indexSupported = 0x04,
        .vendor_ID = 0x00000000,
        .productCode = 0x00000000,
        .revisionNumber = 0x00000000,
        .serialNumber = 0x00000000
    }
};

OD_ATTR_RAM OD_RAM_t OD_RAM = {
    .x1001_errorRegister = 0x00,
    .x1F50_downloadProgramData_sub0 = 0x01,
    .x1F51_programControl_sub0 = 0x01,
    .x1F51_programControl = {0x00000000},
    .x1F52_verifyApplicationSoftware_sub0 = 0x02,
    .x1F52_verifyApplicationSoftware = {0x00000000, 0x00000000},
    .x2000_bootloader_sub0 = 0x02,
    .x2000_bootloader = {0x0000, 0x00FE}
};



/*******************************************************************************
    All OD objects (constant definitions)
*******************************************************************************/
typedef struct {
    OD_obj_var_t o_1000_deviceType;
    OD_obj_var_t o_1001_errorRegister;
    OD_obj_array_t o_1003_pre_definedErrorField;
    OD_obj_var_t o_1014_COB_ID_EMCY;
    OD_obj_var_t o_1015_inhibitTimeEMCY;
    OD_obj_var_t o_1017_producerHeartbeatTime;
    OD_obj_record_t o_1018_identity[5];
    OD_obj_array_t o_1F50_downloadProgramData;
    OD_obj_array_t o_1F51_programControl;
    OD_obj_array_t o_1F52_verifyApplicationSoftware;
    OD_obj_array_t o_2000_bootloader;
} ODObjs_t;

static CO_PROGMEM ODObjs_t ODObjs = {
    .o_1000_deviceType = {
        .dataOrig = &OD_PERSIST_COMM.x1000_deviceType,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    },
    .o_1001_errorRegister = {
        .dataOrig = &OD_RAM.x1001_errorRegister,
        .attribute = ODA_SDO_R | ODA_TPDO,
        .dataLength = 1
    },
    .o_1003_pre_definedErrorField = {
        .dataOrig0 = NULL,
        .dataOrig = NULL,
        .attribute0 = ODA_SDO_RW,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1014_COB_ID_EMCY = {
        .dataOrig = &OD_PERSIST_COMM.x1014_COB_ID_EMCY,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1015_inhibitTimeEMCY = {
        .dataOrig = &OD_PERSIST_COMM.x1015_inhibitTimeEMCY,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_1017_producerHeartbeatTime = {
        .dataOrig = &OD_PERSIST_COMM.x1017_producerHeartbeatTime,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_1018_identity = {
        {
            .dataOrig = &OD_PERSIST_COMM.x1018_identity.highestSub_indexSupported,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1018_identity.vendor_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1018_identity.productCode,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1018_identity.revisionNumber,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_PERSIST_COMM.x1018_identity.serialNumber,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1F50_downloadProgramData = {
        .dataOrig0 = &OD_RAM.x1F50_downloadProgramData_sub0,
        .dataOrig = NULL,
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW,
        .dataElementLength = 0,
        .dataElementSizeof = 0
    },
    .o_1F51_programControl = {
        .dataOrig0 = &OD_RAM.x1F51_programControl_sub0,
        .dataOrig = &OD_RAM.x1F51_programControl[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1F52_verifyApplicationSoftware = {
        .dataOrig0 = &OD_RAM.x1F52_verifyApplicationSoftware_sub0,
        .dataOrig = &OD_RAM.x1F52_verifyApplicationSoftware[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_2000_bootloader = {
        .dataOrig0 = &OD_RAM.x2000_bootloader_sub0,
        .dataOrig = &OD_RAM.x2000_bootloader[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(uint16_t)
    }
};


/*******************************************************************************
    Object dictionary
*******************************************************************************/
static OD_ATTR_OD OD_entry_t ODList[] = {
    {0x1000, 0x01, ODT_VAR, &ODObjs.o_1000_deviceType, NULL},
    {0x1001, 0x01, ODT_VAR, &ODObjs.o_1001_errorRegister, NULL},
    {0x1003, 0x11, ODT_ARR, &ODObjs.o_1003_pre_definedErrorField, NULL},
    {0x1014, 0x01, ODT_VAR, &ODObjs.o_1014_COB_ID_EMCY, NULL},
    {0x1015, 0x01, ODT_VAR, &ODObjs.o_1015_inhibitTimeEMCY, NULL},
    {0x1017, 0x01, ODT_VAR, &ODObjs.o_1017_producerHeartbeatTime, NULL},
    {0x1018, 0x05, ODT_REC, &ODObjs.o_1018_identity, NULL},
    {0x1F50, 0x02, ODT_ARR, &ODObjs.o_1F50_downloadProgramData, NULL},
    {0x1F51, 0x02, ODT_ARR, &ODObjs.o_1F51_programControl, NULL},
    {0x1F52, 0x03, ODT_ARR, &ODObjs.o_1F52_verifyApplicationSoftware, NULL},
    {0x2000, 0x03, ODT_ARR, &ODObjs.o_2000_bootloader, NULL},
    {0x0000, 0x00, 0, NULL, NULL}
};

static OD_t _OD = {
    (sizeof(ODList) / sizeof(ODList[0])) - 1,
    &ODList[0]
};

OD_t *OD = &_OD;
