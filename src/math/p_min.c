#include <pal.h>

/**
 *
 * Finds the minimum value in vector 'a'. Returns the max value and the index
 * of the maximum value.
 *
 * @param      a      Pointer to input vector
 *
 * @param      c      Pointer to output scalar
 *
 * @param[out] index  Pointer to return index of max
 *
 * @param n           Size of 'a' vector.
 *
 * @return            None
 *
 */
void p_min_f32(float *a, float *c, int *index, int n)
{

    int i;
    *c = 0.0f; // FIX: insert max value
    for (i = 0; i < n; i++) {
        if (*(a + i) < *c) {
            *(index) = i;
            *c = *(a + i);
        }
    }
}
