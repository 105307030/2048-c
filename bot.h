#ifndef _BOT_H_
#define _BOT_H_

#include "common.h"

// main api
extern "C" {
extern void init_bot(void);
extern int root_search_move(board_t b);
extern int max_lookahead;
extern int maybe_dead_threshold;
extern float search_threshold;
extern void cache1_clear(void);
}

#ifndef INTEGRATION // hiden to the integration, to avoid access by accident
// export to my runner
extern board_t transpose_ex(board_t x);
extern board_t do_move_ex(board_t b, board_t t, int m);
extern uint32_t murmur3_simplified_ex(uint64_t x);
extern int find_max_tile_ex(board_t b);
extern int count_blank_ex(board_t b);


extern float para_reverse_weight;
extern float para_reverse;
extern float para_reverse_4;
extern float para_reverse_8;
extern float para_reverse_12;
extern float para_equal;
extern float para_inc_0;
extern float para_inc_1;
extern float para_inc_2;
extern float para_inc_3;
extern float para_smooth;
extern float para_smooth_4;
extern float para_smooth_8;
extern float para_smooth_12;
extern float para_blank_1;
extern float para_blank_2;
extern float para_blank_3;
#endif

#endif
