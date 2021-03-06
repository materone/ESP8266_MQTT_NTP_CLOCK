

#define util_assert(t, f, ...){\
	if(!(t)){\
		os_printf("Assertion failed. File: %s Line: %d\r\nMessage: ", __FILE__, __LINE__);\
		os_printf(f, __VA_ARGS__);\
		util_assert_handler();\
	}\
}

#define util_zalloc(sz) ((void *) os_zalloc((sz)))
#define util_free(p) os_free((p))

void util_restart(void);
void util_assert_handler(void);
char * util_str_realloc(const char *p, size_t new_len);
char * util_string_split(const char *in_str, char **list, char sep, int max_list_length);
char * util_make_sub_topic(const char *rootTopic, char *subTopic);
char * util_strdup(const char *s);
char * util_strndup(const char *s, int len);
int util_parse_json_param(void *state, const char *paramname, char *paramvalue, int paramvaluesize);
int util_parse_param_qint(const char *commandrcvd, const char *command,  const char *message, int *val);
bool util_parse_command_qstring(const char *commandrcvd, const char *command,  const char *message, char **val);





