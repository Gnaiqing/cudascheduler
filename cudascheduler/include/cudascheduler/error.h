/*
 * error.h: This file is part of the cuda version of PoCC project
 * Author: Naiqing Guan <guannq@pku.edu.cn>
 */
#ifndef _ERROR_H
# define _ERROR_H 

#include <cudascheduler/common.h>

BEGIN_C_DECLS

extern const char *program_name;
extern void	set_program_name (const char *argv0);

extern void	cudascheduler_warning (const char *message);
extern void	cudascheduler_error (const char *message);
extern void	cudascheduler_fatal (const char *message);

END_C_DECLS


#endif // _ERROR_H
