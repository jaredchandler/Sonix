#ifndef __ERROR_H__ 
#define __ERROR_H__ 

//define APP utility error code 
#define OK  	    						(0)
#define INVALID_PARAM  						(101)
#define NVRAM_ERR 							(102)
#define GET_FILE_SIZE_ERR					(103)
#define TASK_HAVE_NOT_INIT_OK				(104)
#define SET_WDR_ERR							(105)
#define SET_MIRROR_ERR						(106)
#define SET_FLIP_ERR						(107)
#define SET_POWER_FREQ_ERR					(108)
#define GET_IQ_VERSION_ERR					(109)
#define CREATE_TASK_ERR						(110)
#define SYSTEM_IS_REBOOTING					(111)
#define GET_OSD_STRING_ERR					(112)
#define MEMORY_NOT_ENOUGH					(113)
#define PHOTO_FOLDER_IS_FULL				(114)
#define CONTINUE_SHOOTING_IS_RUNNING 		(115)
#define OVER_SNAPSHOT_MAX_QUEUE_NUM			(116)
#define TAKE_PICTURE_ERR					(117)
#define RECORD_FOLDER_IS_FULL				(118)
#define TIMELAPSE_FOLDER_IS_FULL			(119)
#define GET_RESOLUTION_ERR					(120)
#define GET_INDEX_ERR						(121)
#define UPLOAD_FILE_ERR						(122)
#define STOP_UPLOAD_FILE_ERR 				(123)
#define DELETE_FILE_ERR						(124)
#define FWUPGRADE_IS_RUNNING				(125)
#define CREATE_DOWNLOAD_SOCKET_ERR			(126)
#define FWUPGRADE_INIT_ERR					(127)
#define PLAYBACK_IS_ON_WORKING				(128)
#define SET_RECORD_PARAM_ERR				(129)
#define UPLOAD_FILE_NOT_EXIST				(130)
#define UPLOAD_FILE_USER_IS_FULL			(131)
#define UPLOAD_CREATE_TASK_FAILED			(132)
#define UPLOAD_WAIT_PRE_TASK_CLOSE			(133)
#define PB_INIT_FAIL						(134)
#define PB_USER_IS_FULL						(135)
#define PB_CHECK_FILE_ERR					(136)
#define UPGRADE_RECEIVE_SIZE_ERR			(137)
#define UPGRADE_VERSION_ERR					(138)
#define UPGRADE_MD5_ERR						(139)
#define UPGRADE_FW_AND_PLATFORM_DISMATCH	(140)
#define UPGRADE_IS_RUNNING					(141)
#define GET_OBJECT_FAIL 					(142)
#define OVER_DOWLOD_AND_PB_MAX_CONN			(143)
#define DOWNLOD_FONE_TASK_IS_RUNNGIN		(144)
#define CREATE_DOWNLOD_SOCKET_ERR			(145)
#define MEMORY_IS_NOT_ENOUGH				(146)
#define GET_INDEXFILE_ERR					(147)
#define UPLOAD_INDEXFILE_ERR				(148)
#define UPLOAD_ADDR_NOT_EXIST				(149)
#define FILELIST_IS_UPLOADING				(150)
#define PREVIEW_IS_ON_WORKING				(151)
#define OVER_MAX_FOLDER_LEN					(152)

//sdcad error
#define SD_OK								(0)
#define SD_ERR_BASE	        				(200)
#define SD_NOT_EXIST        				(201)
#define SD_TYPE_ERR							(202)
#define SD_IS_FORMATTING					(203)
#define SD_GET_SPACE_ERR					(204)
#define SD_FILE_UPLOADING_ERR				(205)
#define SD_PLAYBAK_ON_WORKING_ERR			(206)
#define SD_SNAPSHOT_ON_WORKING_ERR			(207)
#define SD_THUMBNAIL_ON_WORKING_ERR			(208)
#define SD_FAILED							(209)
#define SD_FORMAT_WAITING					(210)
#define SD_IS_TESTING						(211)
#define SD_TEST_WAITING						(212)
#define SD_TEST_FAILED_ERR					(213)

#endif