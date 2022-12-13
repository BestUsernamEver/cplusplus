#!/bin/bash
width=$(tput cols)
echo "width = ${width}"

ball_x=$((width/2))
echo "ball pos = ${ball_x}"

ball_vel_x=$((1))

trap 'tput cnorm; exit' SIGINT
tput civis

while true; do
    ball_x=$((ball_x+ball_vel_x))
    
    # Right wall
    if [ $ball_x -gt $width ]; then
        ball_vel_x=$((-1))
    fi

    # Left wall
    if [ $ball_x -lt $width ]; then
        ball_vel_X=$((1))
    fi

    clear
    tput cup 0 $ball_x
    echo "o"
done