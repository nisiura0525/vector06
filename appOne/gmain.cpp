#include"libOne.h"
void gmain(){
    window(1000, 1000);
    float rx = 5, ry = 5;
    float bx = 7, by = 7;
    while (notQuit){
        rx = mathMouseX, ry = mathMouseY;
        //�x�N�g��
        float vx = rx-bx;//�I�_����n�_���Ђ�
        float vy = ry-by;
        //�x�N�g���̑傫��
        float mag = sqrt(vx * vx + vy * vy);//�Εӂ����߂�
        float nvx = vx / mag;
        float nvy = vy / mag;
        bx += nvx * 0.001f;
        by += nvy * 0.001f;
        float nmag  = sqrt(nvx * nvx + nvy * nvy);
        //�N���A���č��W��`��
        clear(200);
        mathAxis(9.1f);
        //�x�N�g����`��
        strokeWeight(5);
        stroke(0);
        mathArrow(0, 0, vx, vy);
        mathLine(0, 0, vx, 0);
        mathLine(vx, 0, vx, vy);
        stroke(255,0,0);
        mathArrow(0, 0, nvx, nvy);
        mathLine(0, 0, nvx, 0);
        mathLine(nvx, 0, nvx, nvy);
        strokeWeight(20);
        stroke(255, 0, 0);
        mathPoint(rx, ry);
        stroke(0, 0, 255);
        mathPoint(bx, by);
        //�e�L�X�g�Ńf�[�^��`��
        textSize(50);
        text((let)"vec(" + vx + "," + vy + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);
        text((let)"nvec(" + nvx + "," + nvy + ")", 0, 150);
        text((let)"nmag:" + nmag, 0, 200);
    }
}
