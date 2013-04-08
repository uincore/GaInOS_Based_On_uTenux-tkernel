/* 
* Configuration of module CanTp (CanTp_Cfg.c)
* 
* Created by: 
* Configured for (MCU): MPC551x
* 
* Module vendor:  ArcCore
* Module version: 1.0.1
* 
* 
* Generated by Arctic Studio (http://arccore.com)
*           on Thu Apr 08 12:29:52 CEST 2010
*/


#warning "This default file may only be used as an example!"

#include "CanTp_Types.h"

const CanTp_GeneralType CanTpGeneralConfig =
{
  /* .main_function_period = */ 20,
};


//NSa
const CanTp_NSaType CanTpNSaConfig_UdsPhys_RxNSdu = 
{	
	/* .CanTpNSa = */ 0,
};
const CanTp_NSaType CanTpNSaConfig_UdsFunc_RxNSdu = 
{	
	/* .CanTpNSa = */ 0,
};
const CanTp_NSaType CanTpNSaConfig_UdsPhys_TxNSdu = 
{	
	/* .CanTpNSa = */ 0,
};
const CanTp_NSaType CanTpNSaConfig_UdsFunc_TxNSdu = 
{	
	/* .CanTpNSa = */ 0,
};		

//NTa
const CanTp_NTaType CanTpNTaConfig_UdsPhys_RxNSdu = 
{
  /* .CanTpNTa = */ 0,
};
const CanTp_NTaType CanTpNTaConfig_UdsFunc_RxNSdu = 
{
  /* .CanTpNTa = */ 0,
};
const CanTp_NTaType CanTpNTaConfig_UdsPhys_TxNSdu = 
{
  /* .CanTpNTa = */ 0,
};
const CanTp_NTaType CanTpNTaConfig_UdsFunc_TxNSdu = 
{
  /* .CanTpNTa = */ 0,
};

const CanTp_NSduType CanTpNSduConfigList[] =
{
	{
		/* .direction =  */IS015765_TRANSMIT,
		/* .listItemType = */ CANTP_NOT_LAST_ENTRY,
		{
    		{
        		/* .configData.CanTpTxNSdu.CanIf_PduId = */1, //CANIF_PDU_ID_UDS_PHYS_TX,
        		/* .configData.CanTpTxNSdu.PduR_PduId = */ 0, //PDUR_PDU_ID_UDS_PHYS_TX,
        		/* .configData.CanTpTxNSdu.CanTp_FcPduId = */ 0xDEADBEEF,
        		/* .configData.CanTpTxNSdu.CanTpAddressingMode = */ CANTP_STANDARD,
        		/* .configData.CanTpTxNSdu.CanTpNas =  */2,
        		/* .configData.CanTpTxNSdu.CanTpNbs = */ 2,
        		/* .configData.CanTpTxNSdu.CanTpNcs = */ 2,
        		/* .configData.CanTpTxNSdu.CanTpTxChannel = */ 2,
        		/* .configData.CanTpTxNSdu.CanTpTxDI = */ 6,
        		/* .configData.CanTpTxNSdu.CanTpTxPaddingActivation = */ CANTP_OFF,
        		/* .configData.CanTpTxNSdu.CanTpTxTaType = */ CANTP_FUNCTIONAL,
        		/* .configData.CanTpTxNSdu.CanTpNSa = */ &CanTpNSaConfig_UdsPhys_TxNSdu,
        		/* .configData.CanTpTxNSdu.CanTpNTa = */ &CanTpNTaConfig_UdsPhys_TxNSdu
    		}
		}		
	},
	{
		/* .direction = */ IS015765_TRANSMIT,
		/* .listItemType = */ CANTP_END_OF_LIST,
		{
    		/* .configData.CanTpTxNSdu.CanIf_PduId = */ 0, //CANIF_PDU_ID_UDS_FUNC_TX,
    		/* .configData.CanTpTxNSdu.PduR_PduId = */ 1, //PDUR_PDU_ID_UDS_FUNC_TX,
    		/* .configData.CanTpTxNSdu.CanTp_FcPduId = */ 0xDEADBEEF,
    		/* .configData.CanTpTxNSdu.CanTpAddressingMode = */ CANTP_STANDARD,
    		/* .configData.CanTpTxNSdu.CanTpNas = */ 2,
    		/* .configData.CanTpTxNSdu.CanTpNbs = */ 2,
    		/* .configData.CanTpTxNSdu.CanTpNcs = */ 2,
    		/* .configData.CanTpTxNSdu.CanTpTxChannel = */ 3,    		
    		/* .configData.CanTpTxNSdu.CanTpTxDI = */ 6,
    		/* .configData.CanTpTxNSdu.CanTpTxPaddingActivation = */ CANTP_OFF,
    		/* .configData.CanTpTxNSdu.CanTpTxTaType = */ CANTP_FUNCTIONAL,
    		/* .configData.CanTpTxNSdu.CanTpNSa = */ &CanTpNSaConfig_UdsFunc_TxNSdu,
    		/* .configData.CanTpTxNSdu.CanTpNTa = */ &CanTpNTaConfig_UdsFunc_TxNSdu,
		}
	},
	{
		/* .direction = */ ISO15765_RECEIVE,
		/* .listItemType = */ CANTP_NOT_LAST_ENTRY,
		{
    		/* .configData.CanTpRxNSdu.CanTp_FcPduId = */ 0xDEADBEEF,
    		/* .configData.CanTpRxNSdu.CanIf_FcPduId = */ 0, //CANIF_PDU_ID_UDS_PHYS_RX,
    		/* .configData.CanTpRxNSdu.PduR_PduId = */ 0, //PDUR_PDU_ID_UDS_PHYS_RX,	
    		/* .configData.CanTpRxNSdu.CanTpAddressingFormant = */ CANTP_STANDARD,
    		/* .configData.CanTpRxNSdu.CanTpBs = */ 30,
    		/* .configData.CanTpRxNSdu.CanTpNar = */ 5000,
    		/* .configData.CanTpRxNSdu.CanTpNbr = */ 1000,
    		/* .configData.CanTpRxNSdu.CanTpNcr = */ 1000,
    		/* .configData.CanTpRxNSdu.CanTpRxChannel = */ 0,    		
    		/* .configData.CanTpRxNSdu.CanTpRxDI = */ 6,
    		/* .configData.CanTpRxNSdu.CanTpRxPaddingActivation = */ CANTP_OFF,
    		/* .configData.CanTpRxNSdu.CanTpRxTaType = */ CANTP_FUNCTIONAL,
    		/* .configData.CanTpRxNSdu.CanTpWftMax = */ 5,
    		/* .configData.CanTpRxNSdu.CanTpSTmin = */ 0,
    		/* .configData.CanTpRxNSdu.CanTpNSa = */ &CanTpNSaConfig_UdsPhys_RxNSdu,
    		/* .configData.CanTpRxNSdu.CanTpNTa = */ &CanTpNTaConfig_UdsPhys_RxNSdu
		}
			
	},
	{
		/* .direction = */ ISO15765_RECEIVE,
		/* .listItemType = */ CANTP_NOT_LAST_ENTRY,
		{
    		/* .configData.CanTpRxNSdu.CanTp_FcPduId = */ 0xDEADBEEF,
    		/* .configData.CanTpRxNSdu.CanIf_FcPduId = */ 0, //CANIF_PDU_ID_UDS_FUNC_RX,
    		/* .configData.CanTpRxNSdu.PduR_PduId = */ 1, //PDUR_PDU_ID_UDS_FUNC_RX,	
    		/* .configData.CanTpRxNSdu.CanTpAddressingFormant = */ CANTP_STANDARD,
    		/* .configData.CanTpRxNSdu.CanTpBs = */ 30,
    		/* .configData.CanTpRxNSdu.CanTpNar = */ 5000,
    		/* .configData.CanTpRxNSdu.CanTpNbr = */ 1000,
    		/* .configData.CanTpRxNSdu.CanTpNcr = */ 1000,
    		/* .configData.CanTpRxNSdu.CanTpRxChannel = */ 1,
    		/* .configData.CanTpRxNSdu.CanTpRxDI = */ 6,
    		/* .configData.CanTpRxNSdu.CanTpRxPaddingActivation = */ CANTP_OFF,
    		/* .configData.CanTpRxNSdu.CanTpRxTaType = */ CANTP_FUNCTIONAL,
    		/* .configData.CanTpRxNSdu.CanTpWftMax = */ 0,
    		/* .configData.CanTpRxNSdu.CanTpSTmin = */ 0,
    		/* .configData.CanTpRxNSdu.CanTpNSa = */ &CanTpNSaConfig_UdsFunc_RxNSdu,
    		/* .configData.CanTpRxNSdu.CanTpNTa = */ &CanTpNTaConfig_UdsFunc_RxNSdu
		}	
	},
};

const CanTp_ConfigType CanTpConfig =
{
  /* .CanTpNSduList 	=  */	CanTpNSduConfigList,
  /* .CanTpGeneral 	= */ 	&CanTpGeneralConfig,
};
	
