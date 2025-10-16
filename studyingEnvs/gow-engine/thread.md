```c
int initPluginThread()
{
    ee_sema_t sema;
    ee_thread_t thread;

    sema.max_count = 255;
    sema.init_count = 0;

    sema.option = (uint32_t) "PluginThread";
    semaID = CreateSema(&sema);
    if (semaID < 0)
        return -1;

    thread.func = &loop;
    thread.stack = (void *)(0xCFC00-1024);
    thread.stack_size = 1024;
    // thread.gp_reg = (void *)0x303DF0;
    thread.option = (uint32_t)"PluginThread";
    thread.initial_priority = 0;
    threadID = CreateThread(&thread);

    if (threadID < 0) {
        DeleteSema(semaID);
        return -1;
    }

    Targs *toparg = (Targs*)0x335608;
    
    toparg->requestIn = 0;
    toparg->requestOut = 0;

    _StartThread(threadID, (uint32_t)toparg);

    printf("%d %d\n", threadID, semaID);
    return 0;
}

typedef struct
{
    int count;
    int max_count;
    int init_count;
    int wait_threads;
    uint32_t attr;
    uint32_t option;
} ee_sema_t;


typedef struct
{
    int	status;
    void *	func;
    void *	stack;
    int	stack_size;
    void *	gp_reg;
    int	initial_priority;
    int	current_priority;
    uint32_t attr;
    uint32_t option;
} ee_thread_t;

typedef struct 
{
    int	requestOut;
    int	requestIn;
} Targs;

static int threadID;
static int semaID;
```