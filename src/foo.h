/** @file foo.h
 *  @brief Simple C bindings for helloworld project.
 */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Add two integers together.
 * @param[in] a First integer.
 * @param[in] b Second integer.
 * @return The sum of a and b.
 */
int add(int a, int b);

#ifdef __cplusplus
}
#endif
