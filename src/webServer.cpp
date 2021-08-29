#include "config.h"
#include "webServer.h"

Logger logger(Logger::file_and_terminal, Logger::DEBUG, "result.log");
void test()
{
    logger.debug("this is a debug.");
    logger.info("this is a info.");
    logger.error("this is a error!");
    logger.warning("this is a warning!");
    logger.fatal("this is a fatal error!");
    logger.error("this is a fatal error!");
}
int main(int argc, char **argv) {
    test();
    return 0;
}