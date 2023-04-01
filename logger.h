/********************************************************************************
 *      Copyright:  (C) 2023 NULL
 *                  All rights reserved.
 *
 *       Filename:  logger.h
 *    Description:  This file 
 *
 *        Version:  1.0.0(2023年04月01日)
 *         Author:  LiYangwei <LiYangwei@Lmail>
 *      ChangeLog:  1, Release initial version on "2023年04月01日 11时25分32秒"
 *                 
 ********************************************************************************/

#ifndef _LOGGER_H_
#define _LOGGER_H_

/*
 * 枚举
 */

enum
{
    LOG_LEVEL_ERROR,
    LOG_LEVEL_WARN,
    LOG_LEVEL_INFO,
    LOG_LEVEL_DEBUG,
    LOG_LEVEL_MAX,

};


/* 
 * logger prefix string for different logging levels
 */

#define LOG_STRING_ERROR "ERROR"
#define LOG_STRING_WARN "WARN"
#define LOG_STRING_INFO "INFO"
#define LOG_STRING_DEBUG "DEBUG"


/*
 * 日志初始化和结束函数的声明
 */

int logger_init(char *filename, int loglevel);
void logger_term(void);


/*
 * logging methods by level
 */

void log_error(char* format,...);
void log_warn(char* format,...);
void log_info(char* format,...);
void log_debug(char* format,...);

#endif /* ----- #ifndef _LOGGER_H_ ----- */


