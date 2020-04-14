/*
 * error.c: This file is part of the cuda version of PoCC project
 * Author: Naiqing Guan <guannq@pku.edu.cn>
 */
#if HAVE_CONFIG_H
# include <cudascheduler/config.h>
#endif

#include <cudascheduler/common.h>
#include <cudascheduler/error.h>

static void error (int exit_status, const char *mode, 
		   const char *message);

const char *program_name = NULL;

void
set_program_name (const char *path)
{
  if (! program_name)
    program_name = xstrdup (basename (path));
}

static void
error (int exit_status, const char *mode, const char *message)
{
  fprintf (stderr, "%s: %s: %s.", program_name, mode, message);

  if (exit_status >= 0)
    exit (exit_status);
}

void
cudascheduler_warning (const char *message)
{
  error (-1, "warning", message);
}

void
cudascheduler_error (const char *message)
{
  error (-1, "ERROR", message);
}

void
cudascheduler_fatal (const char *message)
{
  error (EXIT_FAILURE, "FATAL", message);
}
