//
// Created by Timur Turatbekov on 29.11.2024.
//

#ifndef GLOBAL_STATE_H
#define GLOBAL_STATE_H

#include <graphics/scene.h>

struct GlobalState {
    Scene current_scene;
    int current_level_x;
    int current_level_y;
};

inline GlobalState global_state = {
    .current_scene = LEVEL_SCENE,
    0, 0
};

void go_to_next_level(int level_x, int level_y);

void open_menu_scene();
void open_level_scene();
void open_ending_scene();

#endif //GLOBAL_STATE_H