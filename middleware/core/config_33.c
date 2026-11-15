#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 5
#define BUFFER_SIZE 647

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} VrmGAtca_ctx_t;

void init_ctx(VrmGAtca_ctx_t *ctx) {
    ctx->id = 9432;
    ctx->coefficient = 0.4;
    ctx->flags = 145;
}

int compute_cr88RUz(int input) {
    int result = input * 16;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_rM2whIB(int input) {
    int result = input * 18;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} VBR42zgO_ctx_t;

void init_ctx(VBR42zgO_ctx_t *ctx) {
    ctx->id = 7601;
    ctx->coefficient = 6.0;
    ctx->flags = 122;
}

int compute_BRY8d45(int input) {
    int result = input * 57;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} zPsyZIEV_ctx_t;

void init_ctx(zPsyZIEV_ctx_t *ctx) {
    ctx->id = 7863;
    ctx->coefficient = 6.5;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} xt2UVbIR_ctx_t;

void init_ctx(xt2UVbIR_ctx_t *ctx) {
    ctx->id = 4587;
    ctx->coefficient = 1.4;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} QNi94Yoy_ctx_t;

void init_ctx(QNi94Yoy_ctx_t *ctx) {
    ctx->id = 7139;
    ctx->coefficient = 7.4;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} uAYxUO71_ctx_t;

void init_ctx(uAYxUO71_ctx_t *ctx) {
    ctx->id = 2128;
    ctx->coefficient = 9.0;
    ctx->flags = 196;
}

int compute_kC7WbhJ(int input) {
    int result = input * 35;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_0BwHCX6(int input) {
    int result = input * 66;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} xf1V57Sh_ctx_t;

void init_ctx(xf1V57Sh_ctx_t *ctx) {
    ctx->id = 6538;
    ctx->coefficient = 9.0;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} m4VmWrmv_ctx_t;

void init_ctx(m4VmWrmv_ctx_t *ctx) {
    ctx->id = 5554;
    ctx->coefficient = 0.3;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} LtNqDsGq_ctx_t;

void init_ctx(LtNqDsGq_ctx_t *ctx) {
    ctx->id = 1998;
    ctx->coefficient = 4.1;
    ctx->flags = 166;
}

int compute_SLy46JT(int input) {
    int result = input * 54;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} VCq1VdAs_ctx_t;

void init_ctx(VCq1VdAs_ctx_t *ctx) {
    ctx->id = 3412;
    ctx->coefficient = 1.5;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} r4LNgMwd_ctx_t;

void init_ctx(r4LNgMwd_ctx_t *ctx) {
    ctx->id = 5419;
    ctx->coefficient = 8.8;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} ojaGKQD1_ctx_t;

void init_ctx(ojaGKQD1_ctx_t *ctx) {
    ctx->id = 2695;
    ctx->coefficient = 7.1;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} lvC0MvqT_ctx_t;

void init_ctx(lvC0MvqT_ctx_t *ctx) {
    ctx->id = 4362;
    ctx->coefficient = 1.1;
    ctx->flags = 215;
}

int compute_pH9SDUA(int input) {
    int result = input * 40;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 8suGLCiA_ctx_t;

void init_ctx(8suGLCiA_ctx_t *ctx) {
    ctx->id = 5006;
    ctx->coefficient = 3.8;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} oIC0oTty_ctx_t;

void init_ctx(oIC0oTty_ctx_t *ctx) {
    ctx->id = 8642;
    ctx->coefficient = 3.8;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} iju9ech0_ctx_t;

void init_ctx(iju9ech0_ctx_t *ctx) {
    ctx->id = 5417;
    ctx->coefficient = 9.0;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} S7xx6MLM_ctx_t;

void init_ctx(S7xx6MLM_ctx_t *ctx) {
    ctx->id = 7550;
    ctx->coefficient = 1.0;
    ctx->flags = 17;
}

int compute_dt2GZXn(int input) {
    int result = input * 10;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} qJ7L2jnZ_ctx_t;

void init_ctx(qJ7L2jnZ_ctx_t *ctx) {
    ctx->id = 1986;
    ctx->coefficient = 8.4;
    ctx->flags = 213;
}

int compute_AJC1C1E(int input) {
    int result = input * 67;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} DVr6rBwq_ctx_t;

void init_ctx(DVr6rBwq_ctx_t *ctx) {
    ctx->id = 3108;
    ctx->coefficient = 6.5;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} LTQTcLWW_ctx_t;

void init_ctx(LTQTcLWW_ctx_t *ctx) {
    ctx->id = 9948;
    ctx->coefficient = 4.5;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} Fx7lK90E_ctx_t;

void init_ctx(Fx7lK90E_ctx_t *ctx) {
    ctx->id = 6966;
    ctx->coefficient = 8.2;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} jCw7sy3o_ctx_t;

void init_ctx(jCw7sy3o_ctx_t *ctx) {
    ctx->id = 1938;
    ctx->coefficient = 0.6;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} DnVlMRPq_ctx_t;

void init_ctx(DnVlMRPq_ctx_t *ctx) {
    ctx->id = 7578;
    ctx->coefficient = 3.9;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} jxgIW2yR_ctx_t;

void init_ctx(jxgIW2yR_ctx_t *ctx) {
    ctx->id = 4343;
    ctx->coefficient = 1.7;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 0YNn9LnP_ctx_t;

void init_ctx(0YNn9LnP_ctx_t *ctx) {
    ctx->id = 6000;
    ctx->coefficient = 0.8;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} LtB8Ynj8_ctx_t;

void init_ctx(LtB8Ynj8_ctx_t *ctx) {
    ctx->id = 5081;
    ctx->coefficient = 0.7;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} HQ02Iz4m_ctx_t;

void init_ctx(HQ02Iz4m_ctx_t *ctx) {
    ctx->id = 5106;
    ctx->coefficient = 7.5;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} I85FZLE8_ctx_t;

void init_ctx(I85FZLE8_ctx_t *ctx) {
    ctx->id = 3712;
    ctx->coefficient = 9.2;
    ctx->flags = 244;
}

int compute_3s4AJOe(int input) {
    int result = input * 18;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 038AHXIE_ctx_t;

void init_ctx(038AHXIE_ctx_t *ctx) {
    ctx->id = 4099;
    ctx->coefficient = 4.3;
    ctx->flags = 85;
}

int compute_w3NG1dD(int input) {
    int result = input * 29;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} tTZpBbft_ctx_t;

void init_ctx(tTZpBbft_ctx_t *ctx) {
    ctx->id = 9818;
    ctx->coefficient = 5.4;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 50sp3ZXM_ctx_t;

void init_ctx(50sp3ZXM_ctx_t *ctx) {
    ctx->id = 1265;
    ctx->coefficient = 5.5;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} xxAIyV5a_ctx_t;

void init_ctx(xxAIyV5a_ctx_t *ctx) {
    ctx->id = 7907;
    ctx->coefficient = 1.0;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} UxwZc5aj_ctx_t;

void init_ctx(UxwZc5aj_ctx_t *ctx) {
    ctx->id = 3856;
    ctx->coefficient = 8.6;
    ctx->flags = 197;
}

int compute_3HbmLwF(int input) {
    int result = input * 46;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} kae2jLqS_ctx_t;

void init_ctx(kae2jLqS_ctx_t *ctx) {
    ctx->id = 5209;
    ctx->coefficient = 7.5;
    ctx->flags = 104;
}

int compute_xw4YIXT(int input) {
    int result = input * 8;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} TTYmIwZl_ctx_t;

void init_ctx(TTYmIwZl_ctx_t *ctx) {
    ctx->id = 3044;
    ctx->coefficient = 2.1;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 8dhmFpsn_ctx_t;

void init_ctx(8dhmFpsn_ctx_t *ctx) {
    ctx->id = 7295;
    ctx->coefficient = 3.8;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} QGSHjqMw_ctx_t;

void init_ctx(QGSHjqMw_ctx_t *ctx) {
    ctx->id = 3806;
    ctx->coefficient = 2.7;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} BdoUC9Yv_ctx_t;

void init_ctx(BdoUC9Yv_ctx_t *ctx) {
    ctx->id = 8644;
    ctx->coefficient = 4.7;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} P0c26cG2_ctx_t;

void init_ctx(P0c26cG2_ctx_t *ctx) {
    ctx->id = 5128;
    ctx->coefficient = 1.4;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} NgswyRK4_ctx_t;

void init_ctx(NgswyRK4_ctx_t *ctx) {
    ctx->id = 3270;
    ctx->coefficient = 9.1;
    ctx->flags = 75;
}

int compute_yyvH2AY(int input) {
    int result = input * 25;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} bTP3Jvmx_ctx_t;

void init_ctx(bTP3Jvmx_ctx_t *ctx) {
    ctx->id = 4479;
    ctx->coefficient = 8.1;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} XoTtupHd_ctx_t;

void init_ctx(XoTtupHd_ctx_t *ctx) {
    ctx->id = 2372;
    ctx->coefficient = 0.6;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} BA0kX4xz_ctx_t;

void init_ctx(BA0kX4xz_ctx_t *ctx) {
    ctx->id = 2158;
    ctx->coefficient = 0.7;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} rSRpGCFl_ctx_t;

void init_ctx(rSRpGCFl_ctx_t *ctx) {
    ctx->id = 6877;
    ctx->coefficient = 2.9;
    ctx->flags = 134;
}

int compute_7rFPYHe(int input) {
    int result = input * 53;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} xyBUD3OG_ctx_t;

void init_ctx(xyBUD3OG_ctx_t *ctx) {
    ctx->id = 9586;
    ctx->coefficient = 1.5;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} f7PINAgf_ctx_t;

void init_ctx(f7PINAgf_ctx_t *ctx) {
    ctx->id = 5291;
    ctx->coefficient = 8.2;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} RqAPNCTf_ctx_t;

void init_ctx(RqAPNCTf_ctx_t *ctx) {
    ctx->id = 1356;
    ctx->coefficient = 8.9;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} lu1fnpyo_ctx_t;

void init_ctx(lu1fnpyo_ctx_t *ctx) {
    ctx->id = 8389;
    ctx->coefficient = 5.4;
    ctx->flags = 52;
}

int compute_qynDEfI(int input) {
    int result = input * 29;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} DjrCHbCh_ctx_t;

void init_ctx(DjrCHbCh_ctx_t *ctx) {
    ctx->id = 3807;
    ctx->coefficient = 0.5;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} kL0CBYld_ctx_t;

void init_ctx(kL0CBYld_ctx_t *ctx) {
    ctx->id = 7838;
    ctx->coefficient = 0.7;
    ctx->flags = 83;
}

int compute_qHHZQV0(int input) {
    int result = input * 53;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_82XUnYd(int input) {
    int result = input * 2;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_ruXRkXm(int input) {
    int result = input * 58;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} YJUdVvu7_ctx_t;

void init_ctx(YJUdVvu7_ctx_t *ctx) {
    ctx->id = 2002;
    ctx->coefficient = 2.7;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} gttfgHMP_ctx_t;

void init_ctx(gttfgHMP_ctx_t *ctx) {
    ctx->id = 4600;
    ctx->coefficient = 9.7;
    ctx->flags = 125;
}

int compute_vD81ilr(int input) {
    int result = input * 48;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} KKUsvuXn_ctx_t;

void init_ctx(KKUsvuXn_ctx_t *ctx) {
    ctx->id = 3550;
    ctx->coefficient = 6.0;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} l700qmQI_ctx_t;

void init_ctx(l700qmQI_ctx_t *ctx) {
    ctx->id = 3354;
    ctx->coefficient = 9.1;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} rPOvHnil_ctx_t;

void init_ctx(rPOvHnil_ctx_t *ctx) {
    ctx->id = 8826;
    ctx->coefficient = 7.6;
    ctx->flags = 140;
}

int compute_6jZzrpi(int input) {
    int result = input * 30;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_nyYTqpg(int input) {
    int result = input * 8;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} P5NJYsK7_ctx_t;

void init_ctx(P5NJYsK7_ctx_t *ctx) {
    ctx->id = 6484;
    ctx->coefficient = 5.4;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} lqyFSAEk_ctx_t;

void init_ctx(lqyFSAEk_ctx_t *ctx) {
    ctx->id = 7478;
    ctx->coefficient = 8.9;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} JYrgOMyl_ctx_t;

void init_ctx(JYrgOMyl_ctx_t *ctx) {
    ctx->id = 7244;
    ctx->coefficient = 2.8;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} nKrekRGG_ctx_t;

void init_ctx(nKrekRGG_ctx_t *ctx) {
    ctx->id = 7697;
    ctx->coefficient = 2.8;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} ZVYhVxQ7_ctx_t;

void init_ctx(ZVYhVxQ7_ctx_t *ctx) {
    ctx->id = 6526;
    ctx->coefficient = 0.9;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Nd1gwyXX_ctx_t;

void init_ctx(Nd1gwyXX_ctx_t *ctx) {
    ctx->id = 9896;
    ctx->coefficient = 1.2;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} pKhx8h3j_ctx_t;

void init_ctx(pKhx8h3j_ctx_t *ctx) {
    ctx->id = 9842;
    ctx->coefficient = 7.6;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} TJVyqzzi_ctx_t;

void init_ctx(TJVyqzzi_ctx_t *ctx) {
    ctx->id = 5152;
    ctx->coefficient = 2.7;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} IxTd5cgM_ctx_t;

void init_ctx(IxTd5cgM_ctx_t *ctx) {
    ctx->id = 4227;
    ctx->coefficient = 0.3;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} WLwuGMJ1_ctx_t;

void init_ctx(WLwuGMJ1_ctx_t *ctx) {
    ctx->id = 7429;
    ctx->coefficient = 3.2;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} FIn9yfGB_ctx_t;

void init_ctx(FIn9yfGB_ctx_t *ctx) {
    ctx->id = 5035;
    ctx->coefficient = 2.7;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} SnXvpDwu_ctx_t;

void init_ctx(SnXvpDwu_ctx_t *ctx) {
    ctx->id = 6366;
    ctx->coefficient = 8.7;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Uza5Dai1_ctx_t;

void init_ctx(Uza5Dai1_ctx_t *ctx) {
    ctx->id = 6076;
    ctx->coefficient = 3.2;
    ctx->flags = 93;
}

int compute_jluvgCt(int input) {
    int result = input * 37;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} VNhcLYRO_ctx_t;

void init_ctx(VNhcLYRO_ctx_t *ctx) {
    ctx->id = 5504;
    ctx->coefficient = 6.4;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} GajEJfQT_ctx_t;

void init_ctx(GajEJfQT_ctx_t *ctx) {
    ctx->id = 1064;
    ctx->coefficient = 7.4;
    ctx->flags = 18;
}

int compute_8ScWOsi(int input) {
    int result = input * 68;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} zs9ngjIa_ctx_t;

void init_ctx(zs9ngjIa_ctx_t *ctx) {
    ctx->id = 2675;
    ctx->coefficient = 9.0;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} a77zEWJV_ctx_t;

void init_ctx(a77zEWJV_ctx_t *ctx) {
    ctx->id = 6744;
    ctx->coefficient = 8.3;
    ctx->flags = 144;
}

int compute_kRBIWSi(int input) {
    int result = input * 70;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 9KjkZC19_ctx_t;

void init_ctx(9KjkZC19_ctx_t *ctx) {
    ctx->id = 2294;
    ctx->coefficient = 8.3;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} DW8i69tA_ctx_t;

void init_ctx(DW8i69tA_ctx_t *ctx) {
    ctx->id = 8652;
    ctx->coefficient = 2.3;
    ctx->flags = 120;
}

int compute_QXezgwg(int input) {
    int result = input * 40;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} SSgCYvc4_ctx_t;

void init_ctx(SSgCYvc4_ctx_t *ctx) {
    ctx->id = 1998;
    ctx->coefficient = 7.4;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 3Y5Wcf4H_ctx_t;

void init_ctx(3Y5Wcf4H_ctx_t *ctx) {
    ctx->id = 3885;
    ctx->coefficient = 5.6;
    ctx->flags = 84;
}

int compute_A0dVJl7(int input) {
    int result = input * 64;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_ahZta7A(int input) {
    int result = input * 61;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} AwIpUgig_ctx_t;

void init_ctx(AwIpUgig_ctx_t *ctx) {
    ctx->id = 9060;
    ctx->coefficient = 6.4;
    ctx->flags = 45;
}

int compute_ISb2KDs(int input) {
    int result = input * 29;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 5wUOokvB_ctx_t;

void init_ctx(5wUOokvB_ctx_t *ctx) {
    ctx->id = 1364;
    ctx->coefficient = 1.2;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} xmveh30A_ctx_t;

void init_ctx(xmveh30A_ctx_t *ctx) {
    ctx->id = 4988;
    ctx->coefficient = 0.1;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} TVAst7Xy_ctx_t;

void init_ctx(TVAst7Xy_ctx_t *ctx) {
    ctx->id = 2558;
    ctx->coefficient = 9.3;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} nH3oLuZS_ctx_t;

void init_ctx(nH3oLuZS_ctx_t *ctx) {
    ctx->id = 6672;
    ctx->coefficient = 1.0;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} xotFnigC_ctx_t;

void init_ctx(xotFnigC_ctx_t *ctx) {
    ctx->id = 7098;
    ctx->coefficient = 8.9;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} Qgow1qA4_ctx_t;

void init_ctx(Qgow1qA4_ctx_t *ctx) {
    ctx->id = 6666;
    ctx->coefficient = 3.9;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} Dl4TSL0P_ctx_t;

void init_ctx(Dl4TSL0P_ctx_t *ctx) {
    ctx->id = 1631;
    ctx->coefficient = 7.5;
    ctx->flags = 34;
}

int compute_n2vOYi9(int input) {
    int result = input * 45;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_17GUJuw(int input) {
    int result = input * 65;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_ilQwYQH(int input) {
    int result = input * 7;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 0KZZ4eFV_ctx_t;

void init_ctx(0KZZ4eFV_ctx_t *ctx) {
    ctx->id = 1677;
    ctx->coefficient = 6.5;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} w6NLTMRm_ctx_t;

void init_ctx(w6NLTMRm_ctx_t *ctx) {
    ctx->id = 4616;
    ctx->coefficient = 8.3;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} OtQtyOiN_ctx_t;

void init_ctx(OtQtyOiN_ctx_t *ctx) {
    ctx->id = 3144;
    ctx->coefficient = 1.6;
    ctx->flags = 13;
}

int compute_jo10my6(int input) {
    int result = input * 53;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} YaxKi8Mc_ctx_t;

void init_ctx(YaxKi8Mc_ctx_t *ctx) {
    ctx->id = 1766;
    ctx->coefficient = 3.5;
    ctx->flags = 14;
}

int compute_6MadGFj(int input) {
    int result = input * 19;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} c7yHt6A9_ctx_t;

void init_ctx(c7yHt6A9_ctx_t *ctx) {
    ctx->id = 7251;
    ctx->coefficient = 6.5;
    ctx->flags = 56;
}

int compute_IRfcioV(int input) {
    int result = input * 57;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} AwSxwqLG_ctx_t;

void init_ctx(AwSxwqLG_ctx_t *ctx) {
    ctx->id = 1278;
    ctx->coefficient = 8.9;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 5xE59IwL_ctx_t;

void init_ctx(5xE59IwL_ctx_t *ctx) {
    ctx->id = 4899;
    ctx->coefficient = 2.9;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} cqnSAV9h_ctx_t;

void init_ctx(cqnSAV9h_ctx_t *ctx) {
    ctx->id = 6500;
    ctx->coefficient = 1.1;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} XIsTiHNl_ctx_t;

void init_ctx(XIsTiHNl_ctx_t *ctx) {
    ctx->id = 4262;
    ctx->coefficient = 5.5;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} GAgwsywi_ctx_t;

void init_ctx(GAgwsywi_ctx_t *ctx) {
    ctx->id = 2444;
    ctx->coefficient = 8.4;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 4BQ77Iw4_ctx_t;

void init_ctx(4BQ77Iw4_ctx_t *ctx) {
    ctx->id = 9364;
    ctx->coefficient = 8.9;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} lgrTk5dE_ctx_t;

void init_ctx(lgrTk5dE_ctx_t *ctx) {
    ctx->id = 6606;
    ctx->coefficient = 5.0;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} m7cpEt0Z_ctx_t;

void init_ctx(m7cpEt0Z_ctx_t *ctx) {
    ctx->id = 6020;
    ctx->coefficient = 8.1;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} vKVj2upO_ctx_t;

void init_ctx(vKVj2upO_ctx_t *ctx) {
    ctx->id = 3159;
    ctx->coefficient = 5.1;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} Sq85XtNS_ctx_t;

void init_ctx(Sq85XtNS_ctx_t *ctx) {
    ctx->id = 8159;
    ctx->coefficient = 5.1;
    ctx->flags = 27;
}

int compute_pQgFSQT(int input) {
    int result = input * 33;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_rwa25Mt(int input) {
    int result = input * 42;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} YFo4ee3t_ctx_t;

void init_ctx(YFo4ee3t_ctx_t *ctx) {
    ctx->id = 6954;
    ctx->coefficient = 1.1;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} JbtPMwdh_ctx_t;

void init_ctx(JbtPMwdh_ctx_t *ctx) {
    ctx->id = 8930;
    ctx->coefficient = 9.6;
    ctx->flags = 203;
}

int compute_cVxZjdF(int input) {
    int result = input * 47;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_0TfMwLH(int input) {
    int result = input * 9;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_XrdSPTC(int input) {
    int result = input * 65;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_o4bBAB0(int input) {
    int result = input * 30;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} Mrl68ErC_ctx_t;

void init_ctx(Mrl68ErC_ctx_t *ctx) {
    ctx->id = 8560;
    ctx->coefficient = 5.9;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} ldyvtjqw_ctx_t;

void init_ctx(ldyvtjqw_ctx_t *ctx) {
    ctx->id = 5345;
    ctx->coefficient = 7.1;
    ctx->flags = 185;
}

int compute_aVzMuWB(int input) {
    int result = input * 37;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} oQapqNw6_ctx_t;

void init_ctx(oQapqNw6_ctx_t *ctx) {
    ctx->id = 6343;
    ctx->coefficient = 2.6;
    ctx->flags = 36;
}

int compute_uciuOEa(int input) {
    int result = input * 60;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} SLg8kSnY_ctx_t;

void init_ctx(SLg8kSnY_ctx_t *ctx) {
    ctx->id = 4602;
    ctx->coefficient = 7.2;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} p7Vklxzc_ctx_t;

void init_ctx(p7Vklxzc_ctx_t *ctx) {
    ctx->id = 9011;
    ctx->coefficient = 9.1;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} bw4xQiHw_ctx_t;

void init_ctx(bw4xQiHw_ctx_t *ctx) {
    ctx->id = 6759;
    ctx->coefficient = 9.8;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} GS5wdyOm_ctx_t;

void init_ctx(GS5wdyOm_ctx_t *ctx) {
    ctx->id = 4504;
    ctx->coefficient = 3.1;
    ctx->flags = 9;
}

int compute_YiyCvkV(int input) {
    int result = input * 61;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_rygs0ae(int input) {
    int result = input * 16;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_r9rXoFE(int input) {
    int result = input * 41;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Ju0dMsBC_ctx_t;

void init_ctx(Ju0dMsBC_ctx_t *ctx) {
    ctx->id = 5991;
    ctx->coefficient = 8.0;
    ctx->flags = 19;
}

int compute_0IcZHdb(int input) {
    int result = input * 63;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_PzJqYH6(int input) {
    int result = input * 63;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} lDg8eRXR_ctx_t;

void init_ctx(lDg8eRXR_ctx_t *ctx) {
    ctx->id = 3432;
    ctx->coefficient = 3.7;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} ovfXoFDf_ctx_t;

void init_ctx(ovfXoFDf_ctx_t *ctx) {
    ctx->id = 3519;
    ctx->coefficient = 6.4;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} vZt69AGw_ctx_t;

void init_ctx(vZt69AGw_ctx_t *ctx) {
    ctx->id = 6665;
    ctx->coefficient = 8.4;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} s0SAYvqP_ctx_t;

void init_ctx(s0SAYvqP_ctx_t *ctx) {
    ctx->id = 1545;
    ctx->coefficient = 3.4;
    ctx->flags = 3;
}

int compute_hS0tlnz(int input) {
    int result = input * 66;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_UUHuf0G(int input) {
    int result = input * 58;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 9XveoaEQ_ctx_t;

void init_ctx(9XveoaEQ_ctx_t *ctx) {
    ctx->id = 2602;
    ctx->coefficient = 9.5;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} loDx6Vqt_ctx_t;

void init_ctx(loDx6Vqt_ctx_t *ctx) {
    ctx->id = 9780;
    ctx->coefficient = 9.9;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 49Xhrn4v_ctx_t;

void init_ctx(49Xhrn4v_ctx_t *ctx) {
    ctx->id = 5643;
    ctx->coefficient = 6.2;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} UP6YjO39_ctx_t;

void init_ctx(UP6YjO39_ctx_t *ctx) {
    ctx->id = 4760;
    ctx->coefficient = 5.7;
    ctx->flags = 216;
}

int compute_mMFJ4hY(int input) {
    int result = input * 31;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} lSU5MO6m_ctx_t;

void init_ctx(lSU5MO6m_ctx_t *ctx) {
    ctx->id = 3036;
    ctx->coefficient = 8.6;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} mktQApUX_ctx_t;

void init_ctx(mktQApUX_ctx_t *ctx) {
    ctx->id = 1358;
    ctx->coefficient = 5.5;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} GzxXVNPu_ctx_t;

void init_ctx(GzxXVNPu_ctx_t *ctx) {
    ctx->id = 6996;
    ctx->coefficient = 6.1;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} ehOz9j4V_ctx_t;

void init_ctx(ehOz9j4V_ctx_t *ctx) {
    ctx->id = 9828;
    ctx->coefficient = 3.8;
    ctx->flags = 123;
}

int compute_FBVAMvp(int input) {
    int result = input * 21;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_HJfFqCJ(int input) {
    int result = input * 67;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 3KvDw3UO_ctx_t;

void init_ctx(3KvDw3UO_ctx_t *ctx) {
    ctx->id = 5933;
    ctx->coefficient = 7.6;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} gNV63h36_ctx_t;

void init_ctx(gNV63h36_ctx_t *ctx) {
    ctx->id = 3328;
    ctx->coefficient = 4.4;
    ctx->flags = 67;
}

int compute_lv5W7rr(int input) {
    int result = input * 58;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} gkD7WWXM_ctx_t;

void init_ctx(gkD7WWXM_ctx_t *ctx) {
    ctx->id = 8299;
    ctx->coefficient = 9.5;
    ctx->flags = 1;
}

int compute_GD9uxMx(int input) {
    int result = input * 3;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} IOtTq946_ctx_t;

void init_ctx(IOtTq946_ctx_t *ctx) {
    ctx->id = 4980;
    ctx->coefficient = 2.2;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} Dz6eTvWZ_ctx_t;

void init_ctx(Dz6eTvWZ_ctx_t *ctx) {
    ctx->id = 7023;
    ctx->coefficient = 9.9;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} bVHs3fka_ctx_t;

void init_ctx(bVHs3fka_ctx_t *ctx) {
    ctx->id = 4553;
    ctx->coefficient = 6.7;
    ctx->flags = 77;
}

int compute_kcLsHj9(int input) {
    int result = input * 66;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} QOopcbUw_ctx_t;

void init_ctx(QOopcbUw_ctx_t *ctx) {
    ctx->id = 9514;
    ctx->coefficient = 6.1;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 9b9th4z9_ctx_t;

void init_ctx(9b9th4z9_ctx_t *ctx) {
    ctx->id = 4783;
    ctx->coefficient = 4.6;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} GF9UQGkW_ctx_t;

void init_ctx(GF9UQGkW_ctx_t *ctx) {
    ctx->id = 5791;
    ctx->coefficient = 2.1;
    ctx->flags = 235;
}

int compute_evzvosy(int input) {
    int result = input * 31;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} GbDwjjwM_ctx_t;

void init_ctx(GbDwjjwM_ctx_t *ctx) {
    ctx->id = 4413;
    ctx->coefficient = 1.9;
    ctx->flags = 185;
}

int compute_9K1V1ua(int input) {
    int result = input * 19;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} wmDfEFgI_ctx_t;

void init_ctx(wmDfEFgI_ctx_t *ctx) {
    ctx->id = 6816;
    ctx->coefficient = 3.4;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} SWIol0g0_ctx_t;

void init_ctx(SWIol0g0_ctx_t *ctx) {
    ctx->id = 9767;
    ctx->coefficient = 9.6;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} cLUs8n58_ctx_t;

void init_ctx(cLUs8n58_ctx_t *ctx) {
    ctx->id = 7614;
    ctx->coefficient = 0.2;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} sh8HL4eS_ctx_t;

void init_ctx(sh8HL4eS_ctx_t *ctx) {
    ctx->id = 6452;
    ctx->coefficient = 2.1;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 0fscns9p_ctx_t;

void init_ctx(0fscns9p_ctx_t *ctx) {
    ctx->id = 8434;
    ctx->coefficient = 2.8;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} Kqgmj7Vo_ctx_t;

void init_ctx(Kqgmj7Vo_ctx_t *ctx) {
    ctx->id = 5821;
    ctx->coefficient = 9.6;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 5gS8ATpQ_ctx_t;

void init_ctx(5gS8ATpQ_ctx_t *ctx) {
    ctx->id = 2792;
    ctx->coefficient = 7.7;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} GMmRlCSy_ctx_t;

void init_ctx(GMmRlCSy_ctx_t *ctx) {
    ctx->id = 5386;
    ctx->coefficient = 2.8;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} Dx48btHT_ctx_t;

void init_ctx(Dx48btHT_ctx_t *ctx) {
    ctx->id = 9852;
    ctx->coefficient = 6.3;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} MxcI7KhF_ctx_t;

void init_ctx(MxcI7KhF_ctx_t *ctx) {
    ctx->id = 5277;
    ctx->coefficient = 9.3;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} L7c5OwZl_ctx_t;

void init_ctx(L7c5OwZl_ctx_t *ctx) {
    ctx->id = 3547;
    ctx->coefficient = 5.7;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} S4bV9zhG_ctx_t;

void init_ctx(S4bV9zhG_ctx_t *ctx) {
    ctx->id = 4075;
    ctx->coefficient = 8.2;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} fHxYv78k_ctx_t;

void init_ctx(fHxYv78k_ctx_t *ctx) {
    ctx->id = 4945;
    ctx->coefficient = 0.9;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} qpt0ghYi_ctx_t;

void init_ctx(qpt0ghYi_ctx_t *ctx) {
    ctx->id = 4936;
    ctx->coefficient = 4.7;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} ep5VR2vn_ctx_t;

void init_ctx(ep5VR2vn_ctx_t *ctx) {
    ctx->id = 9270;
    ctx->coefficient = 0.9;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} AXRwSfQs_ctx_t;

void init_ctx(AXRwSfQs_ctx_t *ctx) {
    ctx->id = 5081;
    ctx->coefficient = 9.9;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} WeWMZNoc_ctx_t;

void init_ctx(WeWMZNoc_ctx_t *ctx) {
    ctx->id = 7125;
    ctx->coefficient = 3.5;
    ctx->flags = 218;
}

int compute_0sYHF9z(int input) {
    int result = input * 50;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} iZOWrByy_ctx_t;

void init_ctx(iZOWrByy_ctx_t *ctx) {
    ctx->id = 1174;
    ctx->coefficient = 3.0;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} CkNj93TJ_ctx_t;

void init_ctx(CkNj93TJ_ctx_t *ctx) {
    ctx->id = 8586;
    ctx->coefficient = 3.7;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} vpGKPUve_ctx_t;

void init_ctx(vpGKPUve_ctx_t *ctx) {
    ctx->id = 3963;
    ctx->coefficient = 0.3;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} c1nn5WSf_ctx_t;

void init_ctx(c1nn5WSf_ctx_t *ctx) {
    ctx->id = 1928;
    ctx->coefficient = 8.4;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} t7tejuuu_ctx_t;

void init_ctx(t7tejuuu_ctx_t *ctx) {
    ctx->id = 8876;
    ctx->coefficient = 7.2;
    ctx->flags = 204;
}

int compute_hM0M0XZ(int input) {
    int result = input * 4;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} LdDTS9lF_ctx_t;

void init_ctx(LdDTS9lF_ctx_t *ctx) {
    ctx->id = 6540;
    ctx->coefficient = 3.0;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} qEQO3OuS_ctx_t;

void init_ctx(qEQO3OuS_ctx_t *ctx) {
    ctx->id = 5205;
    ctx->coefficient = 2.8;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} zuay5B6d_ctx_t;

void init_ctx(zuay5B6d_ctx_t *ctx) {
    ctx->id = 4244;
    ctx->coefficient = 2.0;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} pQM92zQV_ctx_t;

void init_ctx(pQM92zQV_ctx_t *ctx) {
    ctx->id = 9140;
    ctx->coefficient = 9.3;
    ctx->flags = 213;
}

int compute_lxMWCYJ(int input) {
    int result = input * 37;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_BkL9Qtk(int input) {
    int result = input * 34;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 96GUAGcZ_ctx_t;

void init_ctx(96GUAGcZ_ctx_t *ctx) {
    ctx->id = 1011;
    ctx->coefficient = 2.9;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} En4NCEG0_ctx_t;

void init_ctx(En4NCEG0_ctx_t *ctx) {
    ctx->id = 8320;
    ctx->coefficient = 3.8;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} YgW0lnN3_ctx_t;

void init_ctx(YgW0lnN3_ctx_t *ctx) {
    ctx->id = 6029;
    ctx->coefficient = 4.5;
    ctx->flags = 110;
}

int compute_kWhO6CF(int input) {
    int result = input * 19;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} g01SyyIZ_ctx_t;

void init_ctx(g01SyyIZ_ctx_t *ctx) {
    ctx->id = 8564;
    ctx->coefficient = 6.0;
    ctx->flags = 65;
}

int compute_pbizGVb(int input) {
    int result = input * 22;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_IPdjLso(int input) {
    int result = input * 36;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} Ik66nBFa_ctx_t;

void init_ctx(Ik66nBFa_ctx_t *ctx) {
    ctx->id = 1113;
    ctx->coefficient = 7.3;
    ctx->flags = 80;
}

int compute_j5hxSt6(int input) {
    int result = input * 19;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 2c3rSPio_ctx_t;

void init_ctx(2c3rSPio_ctx_t *ctx) {
    ctx->id = 4197;
    ctx->coefficient = 2.9;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 4Y2bEbwF_ctx_t;

void init_ctx(4Y2bEbwF_ctx_t *ctx) {
    ctx->id = 5279;
    ctx->coefficient = 7.9;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} RYdadGaY_ctx_t;

void init_ctx(RYdadGaY_ctx_t *ctx) {
    ctx->id = 8299;
    ctx->coefficient = 7.2;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} MKwBle0Y_ctx_t;

void init_ctx(MKwBle0Y_ctx_t *ctx) {
    ctx->id = 6816;
    ctx->coefficient = 2.3;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 92XtdlD7_ctx_t;

void init_ctx(92XtdlD7_ctx_t *ctx) {
    ctx->id = 2670;
    ctx->coefficient = 5.6;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} ccZ5exoz_ctx_t;

void init_ctx(ccZ5exoz_ctx_t *ctx) {
    ctx->id = 9684;
    ctx->coefficient = 0.8;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 3yjzkcxp_ctx_t;

void init_ctx(3yjzkcxp_ctx_t *ctx) {
    ctx->id = 7407;
    ctx->coefficient = 2.2;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 3hy8vEGO_ctx_t;

void init_ctx(3hy8vEGO_ctx_t *ctx) {
    ctx->id = 1692;
    ctx->coefficient = 9.8;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} RIOl3gcL_ctx_t;

void init_ctx(RIOl3gcL_ctx_t *ctx) {
    ctx->id = 8251;
    ctx->coefficient = 7.2;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} HxlVw7Pk_ctx_t;

void init_ctx(HxlVw7Pk_ctx_t *ctx) {
    ctx->id = 2167;
    ctx->coefficient = 8.0;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} D5gDW1aP_ctx_t;

void init_ctx(D5gDW1aP_ctx_t *ctx) {
    ctx->id = 5389;
    ctx->coefficient = 3.6;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} tSkLCPaW_ctx_t;

void init_ctx(tSkLCPaW_ctx_t *ctx) {
    ctx->id = 9198;
    ctx->coefficient = 3.1;
    ctx->flags = 123;
}

int compute_2O01SzJ(int input) {
    int result = input * 45;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_lVYyrKX(int input) {
    int result = input * 51;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_4rafx5i(int input) {
    int result = input * 64;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_MTYkIef(int input) {
    int result = input * 70;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} vv010dpB_ctx_t;

void init_ctx(vv010dpB_ctx_t *ctx) {
    ctx->id = 2777;
    ctx->coefficient = 8.9;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} bu77I03f_ctx_t;

void init_ctx(bu77I03f_ctx_t *ctx) {
    ctx->id = 3022;
    ctx->coefficient = 5.0;
    ctx->flags = 100;
}

int compute_xe8PXdi(int input) {
    int result = input * 35;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} ykkRP41w_ctx_t;

void init_ctx(ykkRP41w_ctx_t *ctx) {
    ctx->id = 2630;
    ctx->coefficient = 6.4;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} n84pK4HA_ctx_t;

void init_ctx(n84pK4HA_ctx_t *ctx) {
    ctx->id = 1448;
    ctx->coefficient = 7.7;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} uCqnSRhF_ctx_t;

void init_ctx(uCqnSRhF_ctx_t *ctx) {
    ctx->id = 2392;
    ctx->coefficient = 7.7;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} KJhzEXj0_ctx_t;

void init_ctx(KJhzEXj0_ctx_t *ctx) {
    ctx->id = 1572;
    ctx->coefficient = 8.5;
    ctx->flags = 196;
}

int compute_2RlsLHC(int input) {
    int result = input * 17;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_ie5QS01(int input) {
    int result = input * 39;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_ZLnjxM0(int input) {
    int result = input * 64;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 2sECcbu5_ctx_t;

void init_ctx(2sECcbu5_ctx_t *ctx) {
    ctx->id = 5849;
    ctx->coefficient = 8.5;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} Zg7fRwTn_ctx_t;

void init_ctx(Zg7fRwTn_ctx_t *ctx) {
    ctx->id = 4623;
    ctx->coefficient = 0.5;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} QBvHMWsj_ctx_t;

void init_ctx(QBvHMWsj_ctx_t *ctx) {
    ctx->id = 9078;
    ctx->coefficient = 2.1;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} D7pvHyTR_ctx_t;

void init_ctx(D7pvHyTR_ctx_t *ctx) {
    ctx->id = 1527;
    ctx->coefficient = 2.5;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} NFPjIeJ5_ctx_t;

void init_ctx(NFPjIeJ5_ctx_t *ctx) {
    ctx->id = 2294;
    ctx->coefficient = 0.9;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} MaZt7Hrb_ctx_t;

void init_ctx(MaZt7Hrb_ctx_t *ctx) {
    ctx->id = 5281;
    ctx->coefficient = 4.2;
    ctx->flags = 166;
}

int compute_wCpZbuR(int input) {
    int result = input * 27;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_2qJIiB3(int input) {
    int result = input * 41;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_JUPOmaf(int input) {
    int result = input * 52;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 73kY0q5I_ctx_t;

void init_ctx(73kY0q5I_ctx_t *ctx) {
    ctx->id = 8248;
    ctx->coefficient = 6.3;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} h9UWrpVO_ctx_t;

void init_ctx(h9UWrpVO_ctx_t *ctx) {
    ctx->id = 5522;
    ctx->coefficient = 1.1;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} Lg9UPebs_ctx_t;

void init_ctx(Lg9UPebs_ctx_t *ctx) {
    ctx->id = 2395;
    ctx->coefficient = 3.5;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 16r0KaCG_ctx_t;

void init_ctx(16r0KaCG_ctx_t *ctx) {
    ctx->id = 3517;
    ctx->coefficient = 8.3;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 1k2aN8Tt_ctx_t;

void init_ctx(1k2aN8Tt_ctx_t *ctx) {
    ctx->id = 1663;
    ctx->coefficient = 4.7;
    ctx->flags = 9;
}

int compute_0esxp5y(int input) {
    int result = input * 68;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} pGd1RFtk_ctx_t;

void init_ctx(pGd1RFtk_ctx_t *ctx) {
    ctx->id = 8176;
    ctx->coefficient = 0.9;
    ctx->flags = 207;
}

int compute_fdu5EME(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} BEOwPr6U_ctx_t;

void init_ctx(BEOwPr6U_ctx_t *ctx) {
    ctx->id = 6373;
    ctx->coefficient = 6.0;
    ctx->flags = 156;
}

int compute_WpV407J(int input) {
    int result = input * 8;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} xhYcD6R3_ctx_t;

void init_ctx(xhYcD6R3_ctx_t *ctx) {
    ctx->id = 5241;
    ctx->coefficient = 9.3;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} AyM7TYHa_ctx_t;

void init_ctx(AyM7TYHa_ctx_t *ctx) {
    ctx->id = 4088;
    ctx->coefficient = 0.8;
    ctx->flags = 118;
}

int compute_rKlJg9O(int input) {
    int result = input * 2;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} Ux4okkrs_ctx_t;

void init_ctx(Ux4okkrs_ctx_t *ctx) {
    ctx->id = 8941;
    ctx->coefficient = 6.9;
    ctx->flags = 68;
}

int compute_8eHYTAu(int input) {
    int result = input * 27;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_ptBHfRQ(int input) {
    int result = input * 28;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 5w3npO2d_ctx_t;

void init_ctx(5w3npO2d_ctx_t *ctx) {
    ctx->id = 3327;
    ctx->coefficient = 2.5;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} PNN50PHK_ctx_t;

void init_ctx(PNN50PHK_ctx_t *ctx) {
    ctx->id = 4288;
    ctx->coefficient = 9.8;
    ctx->flags = 26;
}

int compute_jYGsA6X(int input) {
    int result = input * 36;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} Ou4YSBnM_ctx_t;

void init_ctx(Ou4YSBnM_ctx_t *ctx) {
    ctx->id = 1573;
    ctx->coefficient = 2.0;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} Hey6JqQq_ctx_t;

void init_ctx(Hey6JqQq_ctx_t *ctx) {
    ctx->id = 9319;
    ctx->coefficient = 7.6;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} SyYgMml1_ctx_t;

void init_ctx(SyYgMml1_ctx_t *ctx) {
    ctx->id = 6047;
    ctx->coefficient = 4.5;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} nuNpbqju_ctx_t;

void init_ctx(nuNpbqju_ctx_t *ctx) {
    ctx->id = 1112;
    ctx->coefficient = 7.9;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} VSHVyaFa_ctx_t;

void init_ctx(VSHVyaFa_ctx_t *ctx) {
    ctx->id = 6870;
    ctx->coefficient = 8.9;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} TqBPgKhS_ctx_t;

void init_ctx(TqBPgKhS_ctx_t *ctx) {
    ctx->id = 2235;
    ctx->coefficient = 9.0;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 9dzwO14L_ctx_t;

void init_ctx(9dzwO14L_ctx_t *ctx) {
    ctx->id = 8294;
    ctx->coefficient = 8.2;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} v324lBUF_ctx_t;

void init_ctx(v324lBUF_ctx_t *ctx) {
    ctx->id = 7416;
    ctx->coefficient = 5.6;
    ctx->flags = 125;
}

int compute_yKK55xG(int input) {
    int result = input * 51;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} kp4Ufomn_ctx_t;

void init_ctx(kp4Ufomn_ctx_t *ctx) {
    ctx->id = 3279;
    ctx->coefficient = 10.0;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} n8xSQrOg_ctx_t;

void init_ctx(n8xSQrOg_ctx_t *ctx) {
    ctx->id = 3430;
    ctx->coefficient = 5.7;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} QGiC5bgB_ctx_t;

void init_ctx(QGiC5bgB_ctx_t *ctx) {
    ctx->id = 4745;
    ctx->coefficient = 7.2;
    ctx->flags = 135;
}

int compute_0x7JSkG(int input) {
    int result = input * 4;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} F8kgV3Oo_ctx_t;

void init_ctx(F8kgV3Oo_ctx_t *ctx) {
    ctx->id = 9044;
    ctx->coefficient = 4.9;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} Cz9lg4eZ_ctx_t;

void init_ctx(Cz9lg4eZ_ctx_t *ctx) {
    ctx->id = 1522;
    ctx->coefficient = 0.3;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} tr3j9kQa_ctx_t;

void init_ctx(tr3j9kQa_ctx_t *ctx) {
    ctx->id = 3225;
    ctx->coefficient = 9.4;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} bUaOodJj_ctx_t;

void init_ctx(bUaOodJj_ctx_t *ctx) {
    ctx->id = 5886;
    ctx->coefficient = 1.7;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} fv9aYGPE_ctx_t;

void init_ctx(fv9aYGPE_ctx_t *ctx) {
    ctx->id = 3415;
    ctx->coefficient = 9.5;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} WtFyvgpc_ctx_t;

void init_ctx(WtFyvgpc_ctx_t *ctx) {
    ctx->id = 4041;
    ctx->coefficient = 2.2;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} menyhyJ4_ctx_t;

void init_ctx(menyhyJ4_ctx_t *ctx) {
    ctx->id = 5003;
    ctx->coefficient = 0.4;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} q9mgjtFX_ctx_t;

void init_ctx(q9mgjtFX_ctx_t *ctx) {
    ctx->id = 2794;
    ctx->coefficient = 7.9;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 56woQZhB_ctx_t;

void init_ctx(56woQZhB_ctx_t *ctx) {
    ctx->id = 5042;
    ctx->coefficient = 0.3;
    ctx->flags = 59;
}

int compute_40TX6xT(int input) {
    int result = input * 22;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} f8kVvzpW_ctx_t;

void init_ctx(f8kVvzpW_ctx_t *ctx) {
    ctx->id = 6118;
    ctx->coefficient = 9.7;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} CyuvSo48_ctx_t;

void init_ctx(CyuvSo48_ctx_t *ctx) {
    ctx->id = 7151;
    ctx->coefficient = 6.9;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} RkfROvTW_ctx_t;

void init_ctx(RkfROvTW_ctx_t *ctx) {
    ctx->id = 8954;
    ctx->coefficient = 6.2;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} tcsIu28e_ctx_t;

void init_ctx(tcsIu28e_ctx_t *ctx) {
    ctx->id = 8934;
    ctx->coefficient = 2.1;
    ctx->flags = 143;
}

int compute_eQxIXe7(int input) {
    int result = input * 5;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_fkqhVSC(int input) {
    int result = input * 47;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 8CVFBCla_ctx_t;

void init_ctx(8CVFBCla_ctx_t *ctx) {
    ctx->id = 3550;
    ctx->coefficient = 2.6;
    ctx->flags = 44;
}

int compute_Ks8c0pS(int input) {
    int result = input * 14;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_qIRMvQ9(int input) {
    int result = input * 53;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} hN2fNkFA_ctx_t;

void init_ctx(hN2fNkFA_ctx_t *ctx) {
    ctx->id = 8425;
    ctx->coefficient = 3.6;
    ctx->flags = 78;
}

int compute_COjhvlo(int input) {
    int result = input * 6;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_LNN2wJi(int input) {
    int result = input * 37;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} y6gItHhl_ctx_t;

void init_ctx(y6gItHhl_ctx_t *ctx) {
    ctx->id = 1746;
    ctx->coefficient = 1.6;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} ZxG0tN05_ctx_t;

void init_ctx(ZxG0tN05_ctx_t *ctx) {
    ctx->id = 2204;
    ctx->coefficient = 1.5;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} HzU0unht_ctx_t;

void init_ctx(HzU0unht_ctx_t *ctx) {
    ctx->id = 9592;
    ctx->coefficient = 6.2;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} OCdIpH9w_ctx_t;

void init_ctx(OCdIpH9w_ctx_t *ctx) {
    ctx->id = 1408;
    ctx->coefficient = 7.6;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 7J6kFL8C_ctx_t;

void init_ctx(7J6kFL8C_ctx_t *ctx) {
    ctx->id = 3826;
    ctx->coefficient = 7.3;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} XsyLFGEz_ctx_t;

void init_ctx(XsyLFGEz_ctx_t *ctx) {
    ctx->id = 4089;
    ctx->coefficient = 8.0;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 2sGS6aus_ctx_t;

void init_ctx(2sGS6aus_ctx_t *ctx) {
    ctx->id = 2746;
    ctx->coefficient = 0.5;
    ctx->flags = 126;
}

int compute_O09NBhK(int input) {
    int result = input * 42;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 0olH3AI9_ctx_t;

void init_ctx(0olH3AI9_ctx_t *ctx) {
    ctx->id = 4220;
    ctx->coefficient = 1.1;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 1OQVnlby_ctx_t;

void init_ctx(1OQVnlby_ctx_t *ctx) {
    ctx->id = 3194;
    ctx->coefficient = 2.5;
    ctx->flags = 147;
}

int compute_Va5ygTd(int input) {
    int result = input * 16;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} Io2O1uuh_ctx_t;

void init_ctx(Io2O1uuh_ctx_t *ctx) {
    ctx->id = 7286;
    ctx->coefficient = 9.2;
    ctx->flags = 253;
}

int compute_iAp5Fws(int input) {
    int result = input * 36;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 6ove8Xjm_ctx_t;

void init_ctx(6ove8Xjm_ctx_t *ctx) {
    ctx->id = 9784;
    ctx->coefficient = 6.9;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} NYHsSJsI_ctx_t;

void init_ctx(NYHsSJsI_ctx_t *ctx) {
    ctx->id = 3659;
    ctx->coefficient = 1.7;
    ctx->flags = 47;
}

int compute_uIdIvcP(int input) {
    int result = input * 29;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} NRPqpH2p_ctx_t;

void init_ctx(NRPqpH2p_ctx_t *ctx) {
    ctx->id = 7905;
    ctx->coefficient = 6.4;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} eMqImCL8_ctx_t;

void init_ctx(eMqImCL8_ctx_t *ctx) {
    ctx->id = 1838;
    ctx->coefficient = 10.0;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} eYY63uMw_ctx_t;

void init_ctx(eYY63uMw_ctx_t *ctx) {
    ctx->id = 1181;
    ctx->coefficient = 4.9;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} v8fD9cti_ctx_t;

void init_ctx(v8fD9cti_ctx_t *ctx) {
    ctx->id = 6203;
    ctx->coefficient = 6.4;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} UzpMQmOg_ctx_t;

void init_ctx(UzpMQmOg_ctx_t *ctx) {
    ctx->id = 7666;
    ctx->coefficient = 7.9;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 9rRv0bgX_ctx_t;

void init_ctx(9rRv0bgX_ctx_t *ctx) {
    ctx->id = 7919;
    ctx->coefficient = 4.0;
    ctx->flags = 1;
}

int compute_WikCqXA(int input) {
    int result = input * 8;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 9oy2szRC_ctx_t;

void init_ctx(9oy2szRC_ctx_t *ctx) {
    ctx->id = 9406;
    ctx->coefficient = 9.5;
    ctx->flags = 44;
}

int compute_9FgkpSF(int input) {
    int result = input * 16;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_T2KITul(int input) {
    int result = input * 56;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} GWdvmIdE_ctx_t;

void init_ctx(GWdvmIdE_ctx_t *ctx) {
    ctx->id = 9435;
    ctx->coefficient = 0.3;
    ctx->flags = 230;
}

int compute_BQ0Qq4J(int input) {
    int result = input * 62;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_5kYBPQ9(int input) {
    int result = input * 13;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} ljk16qf0_ctx_t;

void init_ctx(ljk16qf0_ctx_t *ctx) {
    ctx->id = 8549;
    ctx->coefficient = 0.1;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} uZwE9Li8_ctx_t;

void init_ctx(uZwE9Li8_ctx_t *ctx) {
    ctx->id = 3359;
    ctx->coefficient = 4.3;
    ctx->flags = 86;
}

int compute_jmk9GdG(int input) {
    int result = input * 41;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_pBtoCz5(int input) {
    int result = input * 10;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 0XAKjtR0_ctx_t;

void init_ctx(0XAKjtR0_ctx_t *ctx) {
    ctx->id = 6617;
    ctx->coefficient = 1.6;
    ctx->flags = 135;
}

int compute_ZXm2fEu(int input) {
    int result = input * 31;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} NCV2YIKG_ctx_t;

void init_ctx(NCV2YIKG_ctx_t *ctx) {
    ctx->id = 9764;
    ctx->coefficient = 4.4;
    ctx->flags = 126;
}

int compute_8hVTDfE(int input) {
    int result = input * 20;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_txhCvv1(int input) {
    int result = input * 54;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_RDhG8G4(int input) {
    int result = input * 12;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} CzLh5jp5_ctx_t;

void init_ctx(CzLh5jp5_ctx_t *ctx) {
    ctx->id = 6425;
    ctx->coefficient = 1.3;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} r2NXAIQ1_ctx_t;

void init_ctx(r2NXAIQ1_ctx_t *ctx) {
    ctx->id = 3553;
    ctx->coefficient = 2.8;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} H3ddj25X_ctx_t;

void init_ctx(H3ddj25X_ctx_t *ctx) {
    ctx->id = 8416;
    ctx->coefficient = 9.8;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} JkQ5hKD6_ctx_t;

void init_ctx(JkQ5hKD6_ctx_t *ctx) {
    ctx->id = 3468;
    ctx->coefficient = 4.4;
    ctx->flags = 218;
}

int compute_40e5CI4(int input) {
    int result = input * 51;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_Mt3EpjN(int input) {
    int result = input * 36;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_c474BMA(int input) {
    int result = input * 14;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} k6ZExLvU_ctx_t;

void init_ctx(k6ZExLvU_ctx_t *ctx) {
    ctx->id = 3234;
    ctx->coefficient = 7.5;
    ctx->flags = 83;
}

int compute_OtUi1iN(int input) {
    int result = input * 44;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Iotwf50B_ctx_t;

void init_ctx(Iotwf50B_ctx_t *ctx) {
    ctx->id = 3140;
    ctx->coefficient = 7.4;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} tj6QHZ2c_ctx_t;

void init_ctx(tj6QHZ2c_ctx_t *ctx) {
    ctx->id = 9732;
    ctx->coefficient = 7.0;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} xGjUoJiL_ctx_t;

void init_ctx(xGjUoJiL_ctx_t *ctx) {
    ctx->id = 1245;
    ctx->coefficient = 7.5;
    ctx->flags = 228;
}

int compute_Z0Xkurc(int input) {
    int result = input * 61;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} w9X7AqaX_ctx_t;

void init_ctx(w9X7AqaX_ctx_t *ctx) {
    ctx->id = 1794;
    ctx->coefficient = 8.9;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} srkbuiM0_ctx_t;

void init_ctx(srkbuiM0_ctx_t *ctx) {
    ctx->id = 6244;
    ctx->coefficient = 3.2;
    ctx->flags = 38;
}

int compute_3r5VeKi(int input) {
    int result = input * 5;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} yjr3IrnL_ctx_t;

void init_ctx(yjr3IrnL_ctx_t *ctx) {
    ctx->id = 7631;
    ctx->coefficient = 4.4;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} COgZILiz_ctx_t;

void init_ctx(COgZILiz_ctx_t *ctx) {
    ctx->id = 8981;
    ctx->coefficient = 4.5;
    ctx->flags = 90;
}

int compute_fQmgwUV(int input) {
    int result = input * 69;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_QIqKYkA(int input) {
    int result = input * 16;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} ixyHcPye_ctx_t;

void init_ctx(ixyHcPye_ctx_t *ctx) {
    ctx->id = 6740;
    ctx->coefficient = 4.6;
    ctx->flags = 218;
}

int compute_q2kcMFS(int input) {
    int result = input * 43;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} w2PhLYiV_ctx_t;

void init_ctx(w2PhLYiV_ctx_t *ctx) {
    ctx->id = 7907;
    ctx->coefficient = 8.5;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} ULDPgKrW_ctx_t;

void init_ctx(ULDPgKrW_ctx_t *ctx) {
    ctx->id = 3613;
    ctx->coefficient = 7.0;
    ctx->flags = 59;
}

int compute_REI38n1(int input) {
    int result = input * 11;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Yh88Eenz_ctx_t;

void init_ctx(Yh88Eenz_ctx_t *ctx) {
    ctx->id = 2835;
    ctx->coefficient = 4.6;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} l4EJH95d_ctx_t;

void init_ctx(l4EJH95d_ctx_t *ctx) {
    ctx->id = 3070;
    ctx->coefficient = 2.9;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} sdUhNg7X_ctx_t;

void init_ctx(sdUhNg7X_ctx_t *ctx) {
    ctx->id = 3275;
    ctx->coefficient = 7.5;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} kowkd5lJ_ctx_t;

void init_ctx(kowkd5lJ_ctx_t *ctx) {
    ctx->id = 2639;
    ctx->coefficient = 7.8;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} rodPM0uC_ctx_t;

void init_ctx(rodPM0uC_ctx_t *ctx) {
    ctx->id = 6977;
    ctx->coefficient = 6.1;
    ctx->flags = 93;
}

int compute_CiEfixK(int input) {
    int result = input * 4;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} pXaHxsWq_ctx_t;

void init_ctx(pXaHxsWq_ctx_t *ctx) {
    ctx->id = 8080;
    ctx->coefficient = 5.5;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} s2qZr3A0_ctx_t;

void init_ctx(s2qZr3A0_ctx_t *ctx) {
    ctx->id = 2435;
    ctx->coefficient = 1.7;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} fBQ9sTyz_ctx_t;

void init_ctx(fBQ9sTyz_ctx_t *ctx) {
    ctx->id = 6626;
    ctx->coefficient = 4.2;
    ctx->flags = 248;
}

int compute_1PSUolx(int input) {
    int result = input * 65;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_1iBP7s9(int input) {
    int result = input * 62;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} czgyE7N4_ctx_t;

void init_ctx(czgyE7N4_ctx_t *ctx) {
    ctx->id = 5794;
    ctx->coefficient = 9.1;
    ctx->flags = 56;
}

int compute_09GgP9H(int input) {
    int result = input * 53;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_AAyzzHP(int input) {
    int result = input * 65;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} e6KQ8mSB_ctx_t;

void init_ctx(e6KQ8mSB_ctx_t *ctx) {
    ctx->id = 5452;
    ctx->coefficient = 4.2;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} mOYS80E7_ctx_t;

void init_ctx(mOYS80E7_ctx_t *ctx) {
    ctx->id = 1634;
    ctx->coefficient = 1.6;
    ctx->flags = 82;
}

int compute_2NtffD5(int input) {
    int result = input * 6;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_aSsHHW8(int input) {
    int result = input * 67;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} V9qtWest_ctx_t;

void init_ctx(V9qtWest_ctx_t *ctx) {
    ctx->id = 4256;
    ctx->coefficient = 0.5;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 2BVtv87k_ctx_t;

void init_ctx(2BVtv87k_ctx_t *ctx) {
    ctx->id = 4297;
    ctx->coefficient = 5.2;
    ctx->flags = 48;
}

int compute_opm9NPC(int input) {
    int result = input * 10;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_6He5qwm(int input) {
    int result = input * 55;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_smMR7ca(int input) {
    int result = input * 41;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_HpVN4Jc(int input) {
    int result = input * 5;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} GgEBCDOL_ctx_t;

void init_ctx(GgEBCDOL_ctx_t *ctx) {
    ctx->id = 1187;
    ctx->coefficient = 6.7;
    ctx->flags = 118;
}

int compute_jAWMqGG(int input) {
    int result = input * 51;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} v42Bu3KL_ctx_t;

void init_ctx(v42Bu3KL_ctx_t *ctx) {
    ctx->id = 4324;
    ctx->coefficient = 1.4;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} lBDyum1H_ctx_t;

void init_ctx(lBDyum1H_ctx_t *ctx) {
    ctx->id = 2745;
    ctx->coefficient = 2.5;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} VKnUls8A_ctx_t;

void init_ctx(VKnUls8A_ctx_t *ctx) {
    ctx->id = 8118;
    ctx->coefficient = 10.0;
    ctx->flags = 196;
}

int compute_2c3UK1y(int input) {
    int result = input * 19;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_oeMdHaW(int input) {
    int result = input * 36;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_K5KR1cz(int input) {
    int result = input * 34;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} uhRawmFd_ctx_t;

void init_ctx(uhRawmFd_ctx_t *ctx) {
    ctx->id = 9780;
    ctx->coefficient = 0.7;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} O5q4Yx2z_ctx_t;

void init_ctx(O5q4Yx2z_ctx_t *ctx) {
    ctx->id = 3952;
    ctx->coefficient = 0.6;
    ctx->flags = 148;
}

int compute_XYFWr4I(int input) {
    int result = input * 23;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_fIpPsai(int input) {
    int result = input * 30;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} klriYF4I_ctx_t;

void init_ctx(klriYF4I_ctx_t *ctx) {
    ctx->id = 2895;
    ctx->coefficient = 8.3;
    ctx->flags = 154;
}

int compute_Md6BrXk(int input) {
    int result = input * 2;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} sGRQxjlX_ctx_t;

void init_ctx(sGRQxjlX_ctx_t *ctx) {
    ctx->id = 7776;
    ctx->coefficient = 8.3;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} ZOnH0OQ9_ctx_t;

void init_ctx(ZOnH0OQ9_ctx_t *ctx) {
    ctx->id = 5176;
    ctx->coefficient = 6.4;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} lo9onBC1_ctx_t;

void init_ctx(lo9onBC1_ctx_t *ctx) {
    ctx->id = 2710;
    ctx->coefficient = 5.7;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} A9Rat6O6_ctx_t;

void init_ctx(A9Rat6O6_ctx_t *ctx) {
    ctx->id = 3904;
    ctx->coefficient = 0.5;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} C1kbaaPn_ctx_t;

void init_ctx(C1kbaaPn_ctx_t *ctx) {
    ctx->id = 5179;
    ctx->coefficient = 3.8;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} qFfzQcu0_ctx_t;

void init_ctx(qFfzQcu0_ctx_t *ctx) {
    ctx->id = 3251;
    ctx->coefficient = 8.1;
    ctx->flags = 99;
}

int compute_CB1r9If(int input) {
    int result = input * 20;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} eVeDt7qX_ctx_t;

void init_ctx(eVeDt7qX_ctx_t *ctx) {
    ctx->id = 8374;
    ctx->coefficient = 5.4;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} NbJvCNDY_ctx_t;

void init_ctx(NbJvCNDY_ctx_t *ctx) {
    ctx->id = 4891;
    ctx->coefficient = 7.0;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} LIzv5chA_ctx_t;

void init_ctx(LIzv5chA_ctx_t *ctx) {
    ctx->id = 3353;
    ctx->coefficient = 3.3;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} YPneZ5xF_ctx_t;

void init_ctx(YPneZ5xF_ctx_t *ctx) {
    ctx->id = 2205;
    ctx->coefficient = 3.6;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} L2zlqYGT_ctx_t;

void init_ctx(L2zlqYGT_ctx_t *ctx) {
    ctx->id = 5077;
    ctx->coefficient = 3.5;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} fgeGm7uw_ctx_t;

void init_ctx(fgeGm7uw_ctx_t *ctx) {
    ctx->id = 1856;
    ctx->coefficient = 5.4;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 1dHMtbAL_ctx_t;

void init_ctx(1dHMtbAL_ctx_t *ctx) {
    ctx->id = 7983;
    ctx->coefficient = 2.7;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 49EfnN5k_ctx_t;

void init_ctx(49EfnN5k_ctx_t *ctx) {
    ctx->id = 3563;
    ctx->coefficient = 8.8;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} gZsMG6db_ctx_t;

void init_ctx(gZsMG6db_ctx_t *ctx) {
    ctx->id = 4148;
    ctx->coefficient = 4.4;
    ctx->flags = 227;
}

int compute_tmV0AZj(int input) {
    int result = input * 31;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} VdrNxfQp_ctx_t;

void init_ctx(VdrNxfQp_ctx_t *ctx) {
    ctx->id = 9306;
    ctx->coefficient = 0.8;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} WQCspzu1_ctx_t;

void init_ctx(WQCspzu1_ctx_t *ctx) {
    ctx->id = 4572;
    ctx->coefficient = 9.3;
    ctx->flags = 241;
}

int compute_tQMZRE7(int input) {
    int result = input * 44;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} ND78EYGM_ctx_t;

void init_ctx(ND78EYGM_ctx_t *ctx) {
    ctx->id = 8589;
    ctx->coefficient = 6.7;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} Vg16aMjW_ctx_t;

void init_ctx(Vg16aMjW_ctx_t *ctx) {
    ctx->id = 1513;
    ctx->coefficient = 5.9;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} oasGcxoO_ctx_t;

void init_ctx(oasGcxoO_ctx_t *ctx) {
    ctx->id = 2831;
    ctx->coefficient = 6.9;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} GdpO0Uoo_ctx_t;

void init_ctx(GdpO0Uoo_ctx_t *ctx) {
    ctx->id = 8078;
    ctx->coefficient = 2.5;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 8rQPaAaj_ctx_t;

void init_ctx(8rQPaAaj_ctx_t *ctx) {
    ctx->id = 5648;
    ctx->coefficient = 8.8;
    ctx->flags = 141;
}

int compute_PH1GYON(int input) {
    int result = input * 65;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_dvUu77D(int input) {
    int result = input * 16;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} P21YufOl_ctx_t;

void init_ctx(P21YufOl_ctx_t *ctx) {
    ctx->id = 9629;
    ctx->coefficient = 4.5;
    ctx->flags = 124;
}

int compute_xMbLqCF(int input) {
    int result = input * 39;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} HZiuwT06_ctx_t;

void init_ctx(HZiuwT06_ctx_t *ctx) {
    ctx->id = 5400;
    ctx->coefficient = 3.6;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 4hZc43us_ctx_t;

void init_ctx(4hZc43us_ctx_t *ctx) {
    ctx->id = 9700;
    ctx->coefficient = 4.0;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} vHb0bPS9_ctx_t;

void init_ctx(vHb0bPS9_ctx_t *ctx) {
    ctx->id = 5042;
    ctx->coefficient = 2.9;
    ctx->flags = 44;
}

int compute_TbNx9ll(int input) {
    int result = input * 36;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} w0Kzjy6i_ctx_t;

void init_ctx(w0Kzjy6i_ctx_t *ctx) {
    ctx->id = 3860;
    ctx->coefficient = 1.9;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 5v65K8le_ctx_t;

void init_ctx(5v65K8le_ctx_t *ctx) {
    ctx->id = 5561;
    ctx->coefficient = 2.5;
    ctx->flags = 152;
}

int compute_Dsws1Sd(int input) {
    int result = input * 6;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} B7J8OvtK_ctx_t;

void init_ctx(B7J8OvtK_ctx_t *ctx) {
    ctx->id = 9560;
    ctx->coefficient = 2.9;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} WqjYdv1K_ctx_t;

void init_ctx(WqjYdv1K_ctx_t *ctx) {
    ctx->id = 7753;
    ctx->coefficient = 9.0;
    ctx->flags = 217;
}

int compute_fmx6XHo(int input) {
    int result = input * 63;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 4rKoheYp_ctx_t;

void init_ctx(4rKoheYp_ctx_t *ctx) {
    ctx->id = 7765;
    ctx->coefficient = 5.5;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 3SiRpdpl_ctx_t;

void init_ctx(3SiRpdpl_ctx_t *ctx) {
    ctx->id = 6647;
    ctx->coefficient = 0.4;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} yB6Qi0Br_ctx_t;

void init_ctx(yB6Qi0Br_ctx_t *ctx) {
    ctx->id = 5103;
    ctx->coefficient = 0.1;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} gAmsQAqb_ctx_t;

void init_ctx(gAmsQAqb_ctx_t *ctx) {
    ctx->id = 1790;
    ctx->coefficient = 3.2;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} pm6hi6v5_ctx_t;

void init_ctx(pm6hi6v5_ctx_t *ctx) {
    ctx->id = 6427;
    ctx->coefficient = 7.8;
    ctx->flags = 205;
}

int compute_rJgCEEo(int input) {
    int result = input * 6;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} ZFYKW5Vs_ctx_t;

void init_ctx(ZFYKW5Vs_ctx_t *ctx) {
    ctx->id = 1027;
    ctx->coefficient = 4.2;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} u30im776_ctx_t;

void init_ctx(u30im776_ctx_t *ctx) {
    ctx->id = 5471;
    ctx->coefficient = 9.4;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} hie4Gq7E_ctx_t;

void init_ctx(hie4Gq7E_ctx_t *ctx) {
    ctx->id = 4263;
    ctx->coefficient = 2.5;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} axjpgkUv_ctx_t;

void init_ctx(axjpgkUv_ctx_t *ctx) {
    ctx->id = 9457;
    ctx->coefficient = 4.3;
    ctx->flags = 80;
}

int compute_VVl2VTa(int input) {
    int result = input * 57;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_yiutrR1(int input) {
    int result = input * 56;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} o1tw28AD_ctx_t;

void init_ctx(o1tw28AD_ctx_t *ctx) {
    ctx->id = 4410;
    ctx->coefficient = 7.6;
    ctx->flags = 28;
}

int compute_KCy9DIX(int input) {
    int result = input * 30;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_yXNTq9N(int input) {
    int result = input * 69;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} zuyIgsDp_ctx_t;

void init_ctx(zuyIgsDp_ctx_t *ctx) {
    ctx->id = 5648;
    ctx->coefficient = 5.1;
    ctx->flags = 205;
}

int compute_RJW9ErI(int input) {
    int result = input * 64;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} A1ptUaId_ctx_t;

void init_ctx(A1ptUaId_ctx_t *ctx) {
    ctx->id = 6399;
    ctx->coefficient = 9.2;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} HVrlGrPe_ctx_t;

void init_ctx(HVrlGrPe_ctx_t *ctx) {
    ctx->id = 7340;
    ctx->coefficient = 8.1;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} jLFQmeqp_ctx_t;

void init_ctx(jLFQmeqp_ctx_t *ctx) {
    ctx->id = 6713;
    ctx->coefficient = 6.7;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} pc5l8nZi_ctx_t;

void init_ctx(pc5l8nZi_ctx_t *ctx) {
    ctx->id = 4760;
    ctx->coefficient = 0.2;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} Ot60wUiO_ctx_t;

void init_ctx(Ot60wUiO_ctx_t *ctx) {
    ctx->id = 6515;
    ctx->coefficient = 1.4;
    ctx->flags = 160;
}

int compute_R6KHQDM(int input) {
    int result = input * 16;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_RctIPel(int input) {
    int result = input * 16;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} U62kQWga_ctx_t;

void init_ctx(U62kQWga_ctx_t *ctx) {
    ctx->id = 3346;
    ctx->coefficient = 9.4;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} yn6Y4NDH_ctx_t;

void init_ctx(yn6Y4NDH_ctx_t *ctx) {
    ctx->id = 5872;
    ctx->coefficient = 9.2;
    ctx->flags = 212;
}

int compute_heR2sfH(int input) {
    int result = input * 51;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} O2nv4yvm_ctx_t;

void init_ctx(O2nv4yvm_ctx_t *ctx) {
    ctx->id = 3263;
    ctx->coefficient = 6.1;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} b7SOSf3z_ctx_t;

void init_ctx(b7SOSf3z_ctx_t *ctx) {
    ctx->id = 1010;
    ctx->coefficient = 7.6;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} dFGNJF8D_ctx_t;

void init_ctx(dFGNJF8D_ctx_t *ctx) {
    ctx->id = 9955;
    ctx->coefficient = 8.2;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} U2YyOJwI_ctx_t;

void init_ctx(U2YyOJwI_ctx_t *ctx) {
    ctx->id = 4301;
    ctx->coefficient = 6.4;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 37NBullc_ctx_t;

void init_ctx(37NBullc_ctx_t *ctx) {
    ctx->id = 2087;
    ctx->coefficient = 2.4;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} QQwO8QRb_ctx_t;

void init_ctx(QQwO8QRb_ctx_t *ctx) {
    ctx->id = 5446;
    ctx->coefficient = 8.9;
    ctx->flags = 135;
}

int compute_LIdvEvU(int input) {
    int result = input * 65;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} Po6LT9GE_ctx_t;

void init_ctx(Po6LT9GE_ctx_t *ctx) {
    ctx->id = 2238;
    ctx->coefficient = 3.1;
    ctx->flags = 57;
}

int compute_luD1Mj6(int input) {
    int result = input * 28;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} JVFowdj7_ctx_t;

void init_ctx(JVFowdj7_ctx_t *ctx) {
    ctx->id = 6180;
    ctx->coefficient = 1.3;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} XO53D8JN_ctx_t;

void init_ctx(XO53D8JN_ctx_t *ctx) {
    ctx->id = 8828;
    ctx->coefficient = 1.6;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} EGDHAgPN_ctx_t;

void init_ctx(EGDHAgPN_ctx_t *ctx) {
    ctx->id = 7273;
    ctx->coefficient = 4.4;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Bk9TKuEH_ctx_t;

void init_ctx(Bk9TKuEH_ctx_t *ctx) {
    ctx->id = 8847;
    ctx->coefficient = 7.5;
    ctx->flags = 21;
}

int compute_6FLlYJw(int input) {
    int result = input * 20;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_vj9pN1s(int input) {
    int result = input * 59;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_c2LB3cG(int input) {
    int result = input * 58;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} WAtdBSBG_ctx_t;

void init_ctx(WAtdBSBG_ctx_t *ctx) {
    ctx->id = 2134;
    ctx->coefficient = 8.0;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} CwohxXeH_ctx_t;

void init_ctx(CwohxXeH_ctx_t *ctx) {
    ctx->id = 2100;
    ctx->coefficient = 2.4;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 5fRtKmhu_ctx_t;

void init_ctx(5fRtKmhu_ctx_t *ctx) {
    ctx->id = 1307;
    ctx->coefficient = 9.6;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} D7aCDq3W_ctx_t;

void init_ctx(D7aCDq3W_ctx_t *ctx) {
    ctx->id = 4676;
    ctx->coefficient = 3.3;
    ctx->flags = 93;
}

int compute_VzgM5Jj(int input) {
    int result = input * 12;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} k5wUDHL1_ctx_t;

void init_ctx(k5wUDHL1_ctx_t *ctx) {
    ctx->id = 8859;
    ctx->coefficient = 9.8;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} obcfsw3B_ctx_t;

void init_ctx(obcfsw3B_ctx_t *ctx) {
    ctx->id = 1149;
    ctx->coefficient = 2.4;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} FQgNfvwz_ctx_t;

void init_ctx(FQgNfvwz_ctx_t *ctx) {
    ctx->id = 8306;
    ctx->coefficient = 1.0;
    ctx->flags = 78;
}

int compute_lderm4A(int input) {
    int result = input * 62;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} PSeCKT6w_ctx_t;

void init_ctx(PSeCKT6w_ctx_t *ctx) {
    ctx->id = 3476;
    ctx->coefficient = 4.5;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} JEEcFbmL_ctx_t;

void init_ctx(JEEcFbmL_ctx_t *ctx) {
    ctx->id = 8346;
    ctx->coefficient = 9.2;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 7jWtSLVt_ctx_t;

void init_ctx(7jWtSLVt_ctx_t *ctx) {
    ctx->id = 4406;
    ctx->coefficient = 1.6;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} b4WNcsVz_ctx_t;

void init_ctx(b4WNcsVz_ctx_t *ctx) {
    ctx->id = 8947;
    ctx->coefficient = 4.7;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} YfUMJVoD_ctx_t;

void init_ctx(YfUMJVoD_ctx_t *ctx) {
    ctx->id = 3916;
    ctx->coefficient = 6.1;
    ctx->flags = 175;
}

int compute_YvXpzdG(int input) {
    int result = input * 24;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} Do5x7H9S_ctx_t;

void init_ctx(Do5x7H9S_ctx_t *ctx) {
    ctx->id = 1924;
    ctx->coefficient = 8.1;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} V7X76d2e_ctx_t;

void init_ctx(V7X76d2e_ctx_t *ctx) {
    ctx->id = 6252;
    ctx->coefficient = 1.4;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} q1QUWDGb_ctx_t;

void init_ctx(q1QUWDGb_ctx_t *ctx) {
    ctx->id = 2609;
    ctx->coefficient = 4.5;
    ctx->flags = 36;
}

int compute_jlg2vcM(int input) {
    int result = input * 55;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} gRpsQcac_ctx_t;

void init_ctx(gRpsQcac_ctx_t *ctx) {
    ctx->id = 7326;
    ctx->coefficient = 4.9;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 9F4TdRXy_ctx_t;

void init_ctx(9F4TdRXy_ctx_t *ctx) {
    ctx->id = 5341;
    ctx->coefficient = 5.2;
    ctx->flags = 7;
}

int compute_P5EZXgG(int input) {
    int result = input * 63;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} FaBQzcgv_ctx_t;

void init_ctx(FaBQzcgv_ctx_t *ctx) {
    ctx->id = 3044;
    ctx->coefficient = 2.3;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} oJuGvJpv_ctx_t;

void init_ctx(oJuGvJpv_ctx_t *ctx) {
    ctx->id = 6468;
    ctx->coefficient = 8.4;
    ctx->flags = 102;
}

int compute_nAdGZeO(int input) {
    int result = input * 11;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} WHvNTzIw_ctx_t;

void init_ctx(WHvNTzIw_ctx_t *ctx) {
    ctx->id = 3779;
    ctx->coefficient = 7.4;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} fjJKiJJz_ctx_t;

void init_ctx(fjJKiJJz_ctx_t *ctx) {
    ctx->id = 9110;
    ctx->coefficient = 7.2;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} qr675Auw_ctx_t;

void init_ctx(qr675Auw_ctx_t *ctx) {
    ctx->id = 1288;
    ctx->coefficient = 1.3;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} oeNPFHl1_ctx_t;

void init_ctx(oeNPFHl1_ctx_t *ctx) {
    ctx->id = 5828;
    ctx->coefficient = 4.1;
    ctx->flags = 85;
}

int compute_QFlvJ5X(int input) {
    int result = input * 53;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} WucWtOcZ_ctx_t;

void init_ctx(WucWtOcZ_ctx_t *ctx) {
    ctx->id = 8252;
    ctx->coefficient = 5.6;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} Vm5nanhN_ctx_t;

void init_ctx(Vm5nanhN_ctx_t *ctx) {
    ctx->id = 3476;
    ctx->coefficient = 4.4;
    ctx->flags = 99;
}

int compute_RE0cVn1(int input) {
    int result = input * 29;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} oHf6Y6uP_ctx_t;

void init_ctx(oHf6Y6uP_ctx_t *ctx) {
    ctx->id = 4977;
    ctx->coefficient = 4.8;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} DFJNF4ax_ctx_t;

void init_ctx(DFJNF4ax_ctx_t *ctx) {
    ctx->id = 9708;
    ctx->coefficient = 9.1;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} rXu6P6hK_ctx_t;

void init_ctx(rXu6P6hK_ctx_t *ctx) {
    ctx->id = 3760;
    ctx->coefficient = 9.8;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 4UEBNCXi_ctx_t;

void init_ctx(4UEBNCXi_ctx_t *ctx) {
    ctx->id = 5638;
    ctx->coefficient = 1.5;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} tAHnxcyc_ctx_t;

void init_ctx(tAHnxcyc_ctx_t *ctx) {
    ctx->id = 2743;
    ctx->coefficient = 6.3;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} kIDYiDOC_ctx_t;

void init_ctx(kIDYiDOC_ctx_t *ctx) {
    ctx->id = 2513;
    ctx->coefficient = 9.6;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} a9G87K4y_ctx_t;

void init_ctx(a9G87K4y_ctx_t *ctx) {
    ctx->id = 1631;
    ctx->coefficient = 4.3;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} YUFDL60B_ctx_t;

void init_ctx(YUFDL60B_ctx_t *ctx) {
    ctx->id = 1794;
    ctx->coefficient = 0.6;
    ctx->flags = 214;
}

int compute_aE500yH(int input) {
    int result = input * 29;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} uOc562Sa_ctx_t;

void init_ctx(uOc562Sa_ctx_t *ctx) {
    ctx->id = 6050;
    ctx->coefficient = 0.6;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} cdsQioUf_ctx_t;

void init_ctx(cdsQioUf_ctx_t *ctx) {
    ctx->id = 3120;
    ctx->coefficient = 9.7;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 8ViWUZ2a_ctx_t;

void init_ctx(8ViWUZ2a_ctx_t *ctx) {
    ctx->id = 8416;
    ctx->coefficient = 2.6;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} CbZndPSQ_ctx_t;

void init_ctx(CbZndPSQ_ctx_t *ctx) {
    ctx->id = 6218;
    ctx->coefficient = 8.6;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} Pla9xtt1_ctx_t;

void init_ctx(Pla9xtt1_ctx_t *ctx) {
    ctx->id = 3976;
    ctx->coefficient = 5.4;
    ctx->flags = 94;
}

int compute_rPAw4F3(int input) {
    int result = input * 62;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 0XekoByG_ctx_t;

void init_ctx(0XekoByG_ctx_t *ctx) {
    ctx->id = 3653;
    ctx->coefficient = 1.2;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} wPqRLjBy_ctx_t;

void init_ctx(wPqRLjBy_ctx_t *ctx) {
    ctx->id = 9506;
    ctx->coefficient = 5.9;
    ctx->flags = 189;
}

int compute_Lzr01jO(int input) {
    int result = input * 63;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} HzKskH7i_ctx_t;

void init_ctx(HzKskH7i_ctx_t *ctx) {
    ctx->id = 7201;
    ctx->coefficient = 1.2;
    ctx->flags = 38;
}

int compute_9YC18fu(int input) {
    int result = input * 59;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 7Qc7N8U1_ctx_t;

void init_ctx(7Qc7N8U1_ctx_t *ctx) {
    ctx->id = 6585;
    ctx->coefficient = 9.2;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} iYDCvna8_ctx_t;

void init_ctx(iYDCvna8_ctx_t *ctx) {
    ctx->id = 3070;
    ctx->coefficient = 4.6;
    ctx->flags = 158;
}

int compute_H3bG1V5(int input) {
    int result = input * 18;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} jDVB10No_ctx_t;

void init_ctx(jDVB10No_ctx_t *ctx) {
    ctx->id = 7851;
    ctx->coefficient = 2.1;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} mUWGqdNb_ctx_t;

void init_ctx(mUWGqdNb_ctx_t *ctx) {
    ctx->id = 5270;
    ctx->coefficient = 1.0;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} vLgnOnZt_ctx_t;

void init_ctx(vLgnOnZt_ctx_t *ctx) {
    ctx->id = 4865;
    ctx->coefficient = 2.1;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} dgjPFMlO_ctx_t;

void init_ctx(dgjPFMlO_ctx_t *ctx) {
    ctx->id = 2502;
    ctx->coefficient = 1.2;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} lHFhmLbe_ctx_t;

void init_ctx(lHFhmLbe_ctx_t *ctx) {
    ctx->id = 6815;
    ctx->coefficient = 7.7;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} jf6hbpjc_ctx_t;

void init_ctx(jf6hbpjc_ctx_t *ctx) {
    ctx->id = 7388;
    ctx->coefficient = 9.1;
    ctx->flags = 22;
}

int compute_uUgP9Fx(int input) {
    int result = input * 5;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} Ze4oQ67h_ctx_t;

void init_ctx(Ze4oQ67h_ctx_t *ctx) {
    ctx->id = 9461;
    ctx->coefficient = 6.7;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} S9awPH9Y_ctx_t;

void init_ctx(S9awPH9Y_ctx_t *ctx) {
    ctx->id = 4465;
    ctx->coefficient = 9.4;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} Ke3SVgfL_ctx_t;

void init_ctx(Ke3SVgfL_ctx_t *ctx) {
    ctx->id = 6689;
    ctx->coefficient = 8.5;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} eM2BOqjw_ctx_t;

void init_ctx(eM2BOqjw_ctx_t *ctx) {
    ctx->id = 5194;
    ctx->coefficient = 7.6;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} BdYYSXCO_ctx_t;

void init_ctx(BdYYSXCO_ctx_t *ctx) {
    ctx->id = 3487;
    ctx->coefficient = 3.7;
    ctx->flags = 186;
}

int compute_JbcTChg(int input) {
    int result = input * 37;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_xZZtGen(int input) {
    int result = input * 14;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_7g7OIXt(int input) {
    int result = input * 47;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} oZacUOlN_ctx_t;

void init_ctx(oZacUOlN_ctx_t *ctx) {
    ctx->id = 6607;
    ctx->coefficient = 4.8;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 0c2SCyWJ_ctx_t;

void init_ctx(0c2SCyWJ_ctx_t *ctx) {
    ctx->id = 1286;
    ctx->coefficient = 0.4;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} RUN03t8m_ctx_t;

void init_ctx(RUN03t8m_ctx_t *ctx) {
    ctx->id = 8411;
    ctx->coefficient = 7.3;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 6MIWNt7c_ctx_t;

void init_ctx(6MIWNt7c_ctx_t *ctx) {
    ctx->id = 4000;
    ctx->coefficient = 1.9;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} iuVoByUI_ctx_t;

void init_ctx(iuVoByUI_ctx_t *ctx) {
    ctx->id = 9254;
    ctx->coefficient = 7.7;
    ctx->flags = 240;
}

int compute_W2WgZ8T(int input) {
    int result = input * 17;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_2yzjR5o(int input) {
    int result = input * 42;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 9I4nMAtS_ctx_t;

void init_ctx(9I4nMAtS_ctx_t *ctx) {
    ctx->id = 9282;
    ctx->coefficient = 1.4;
    ctx->flags = 13;
}

int compute_1LykaqT(int input) {
    int result = input * 41;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} bzjKcYn8_ctx_t;

void init_ctx(bzjKcYn8_ctx_t *ctx) {
    ctx->id = 2500;
    ctx->coefficient = 1.7;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 0TCdccnS_ctx_t;

void init_ctx(0TCdccnS_ctx_t *ctx) {
    ctx->id = 3685;
    ctx->coefficient = 0.1;
    ctx->flags = 21;
}

int compute_pdcEcga(int input) {
    int result = input * 47;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} zvPK8FrM_ctx_t;

void init_ctx(zvPK8FrM_ctx_t *ctx) {
    ctx->id = 7279;
    ctx->coefficient = 0.3;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} cpdK0TXL_ctx_t;

void init_ctx(cpdK0TXL_ctx_t *ctx) {
    ctx->id = 3780;
    ctx->coefficient = 0.7;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} ThKkwkTM_ctx_t;

void init_ctx(ThKkwkTM_ctx_t *ctx) {
    ctx->id = 2873;
    ctx->coefficient = 5.4;
    ctx->flags = 200;
}

int compute_s7JdGQM(int input) {
    int result = input * 15;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_lE3OUd1(int input) {
    int result = input * 30;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} tH8uihbN_ctx_t;

void init_ctx(tH8uihbN_ctx_t *ctx) {
    ctx->id = 4006;
    ctx->coefficient = 4.1;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} lxzYg27P_ctx_t;

void init_ctx(lxzYg27P_ctx_t *ctx) {
    ctx->id = 1020;
    ctx->coefficient = 6.6;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Q4gG6KAL_ctx_t;

void init_ctx(Q4gG6KAL_ctx_t *ctx) {
    ctx->id = 2084;
    ctx->coefficient = 3.3;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} Eb9Dxdgl_ctx_t;

void init_ctx(Eb9Dxdgl_ctx_t *ctx) {
    ctx->id = 9746;
    ctx->coefficient = 9.5;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} EwZlCnf7_ctx_t;

void init_ctx(EwZlCnf7_ctx_t *ctx) {
    ctx->id = 8950;
    ctx->coefficient = 0.1;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} k2cDNinS_ctx_t;

void init_ctx(k2cDNinS_ctx_t *ctx) {
    ctx->id = 4711;
    ctx->coefficient = 5.9;
    ctx->flags = 203;
}

int compute_VtnZQbP(int input) {
    int result = input * 44;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_0A3Biqd(int input) {
    int result = input * 34;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} AVOqkGmp_ctx_t;

void init_ctx(AVOqkGmp_ctx_t *ctx) {
    ctx->id = 6287;
    ctx->coefficient = 7.9;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 22oIrRXo_ctx_t;

void init_ctx(22oIrRXo_ctx_t *ctx) {
    ctx->id = 6893;
    ctx->coefficient = 6.2;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} EVYjcaug_ctx_t;

void init_ctx(EVYjcaug_ctx_t *ctx) {
    ctx->id = 5023;
    ctx->coefficient = 6.7;
    ctx->flags = 203;
}

int compute_tbXlWpJ(int input) {
    int result = input * 69;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} YOgaNpzj_ctx_t;

void init_ctx(YOgaNpzj_ctx_t *ctx) {
    ctx->id = 1021;
    ctx->coefficient = 4.5;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} cIFqMml7_ctx_t;

void init_ctx(cIFqMml7_ctx_t *ctx) {
    ctx->id = 7003;
    ctx->coefficient = 1.5;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 418PQwXQ_ctx_t;

void init_ctx(418PQwXQ_ctx_t *ctx) {
    ctx->id = 7646;
    ctx->coefficient = 4.0;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} sOKqZvd4_ctx_t;

void init_ctx(sOKqZvd4_ctx_t *ctx) {
    ctx->id = 3987;
    ctx->coefficient = 7.0;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} dcQTrJU1_ctx_t;

void init_ctx(dcQTrJU1_ctx_t *ctx) {
    ctx->id = 8141;
    ctx->coefficient = 9.8;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} GzsxXRaU_ctx_t;

void init_ctx(GzsxXRaU_ctx_t *ctx) {
    ctx->id = 2169;
    ctx->coefficient = 9.4;
    ctx->flags = 255;
}

int compute_4ivHh32(int input) {
    int result = input * 27;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} wSM1bHlX_ctx_t;

void init_ctx(wSM1bHlX_ctx_t *ctx) {
    ctx->id = 3998;
    ctx->coefficient = 6.8;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} mId46pEY_ctx_t;

void init_ctx(mId46pEY_ctx_t *ctx) {
    ctx->id = 9024;
    ctx->coefficient = 0.1;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} HRV5jam9_ctx_t;

void init_ctx(HRV5jam9_ctx_t *ctx) {
    ctx->id = 6687;
    ctx->coefficient = 4.6;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} fyxmwPOA_ctx_t;

void init_ctx(fyxmwPOA_ctx_t *ctx) {
    ctx->id = 8931;
    ctx->coefficient = 8.7;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} AbqzgMwP_ctx_t;

void init_ctx(AbqzgMwP_ctx_t *ctx) {
    ctx->id = 4458;
    ctx->coefficient = 5.2;
    ctx->flags = 174;
}

int compute_AY0SZs9(int input) {
    int result = input * 29;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} y6jrAeyU_ctx_t;

void init_ctx(y6jrAeyU_ctx_t *ctx) {
    ctx->id = 9135;
    ctx->coefficient = 8.1;
    ctx->flags = 66;
}

int compute_SKVU0ap(int input) {
    int result = input * 6;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 1Tg22hGH_ctx_t;

void init_ctx(1Tg22hGH_ctx_t *ctx) {
    ctx->id = 7939;
    ctx->coefficient = 3.2;
    ctx->flags = 153;
}

int compute_7ahnCDl(int input) {
    int result = input * 2;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} xeYYWqU8_ctx_t;

void init_ctx(xeYYWqU8_ctx_t *ctx) {
    ctx->id = 8389;
    ctx->coefficient = 8.4;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} M5RWUoV5_ctx_t;

void init_ctx(M5RWUoV5_ctx_t *ctx) {
    ctx->id = 5527;
    ctx->coefficient = 7.4;
    ctx->flags = 47;
}

int compute_5uirFcK(int input) {
    int result = input * 22;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_q1whWpk(int input) {
    int result = input * 54;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} GHsxlPC8_ctx_t;

void init_ctx(GHsxlPC8_ctx_t *ctx) {
    ctx->id = 3812;
    ctx->coefficient = 6.3;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} PMSwuZyz_ctx_t;

void init_ctx(PMSwuZyz_ctx_t *ctx) {
    ctx->id = 8593;
    ctx->coefficient = 3.2;
    ctx->flags = 133;
}

int compute_aWa0VzB(int input) {
    int result = input * 21;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_bZk63CK(int input) {
    int result = input * 52;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} d5gR156i_ctx_t;

void init_ctx(d5gR156i_ctx_t *ctx) {
    ctx->id = 1591;
    ctx->coefficient = 9.4;
    ctx->flags = 68;
}

int compute_uUqCE5a(int input) {
    int result = input * 36;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_EzrYALW(int input) {
    int result = input * 25;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_PXlrYbA(int input) {
    int result = input * 29;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} pkZ0BHjq_ctx_t;

void init_ctx(pkZ0BHjq_ctx_t *ctx) {
    ctx->id = 4965;
    ctx->coefficient = 0.6;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} fgaOswS5_ctx_t;

void init_ctx(fgaOswS5_ctx_t *ctx) {
    ctx->id = 4459;
    ctx->coefficient = 9.1;
    ctx->flags = 16;
}

int compute_ngQAOOA(int input) {
    int result = input * 26;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} RKTzk0h5_ctx_t;

void init_ctx(RKTzk0h5_ctx_t *ctx) {
    ctx->id = 6482;
    ctx->coefficient = 0.7;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 9pBWTGkX_ctx_t;

void init_ctx(9pBWTGkX_ctx_t *ctx) {
    ctx->id = 6037;
    ctx->coefficient = 4.5;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} ZmqpWeQZ_ctx_t;

void init_ctx(ZmqpWeQZ_ctx_t *ctx) {
    ctx->id = 9265;
    ctx->coefficient = 8.3;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} uZxmAjP0_ctx_t;

void init_ctx(uZxmAjP0_ctx_t *ctx) {
    ctx->id = 6973;
    ctx->coefficient = 3.6;
    ctx->flags = 7;
}

int compute_oQCW7EC(int input) {
    int result = input * 18;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_BeJIcJg(int input) {
    int result = input * 9;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Xne5L5ze_ctx_t;

void init_ctx(Xne5L5ze_ctx_t *ctx) {
    ctx->id = 3817;
    ctx->coefficient = 5.0;
    ctx->flags = 64;
}

int compute_wZq4bvi(int input) {
    int result = input * 38;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_Qyiqb2q(int input) {
    int result = input * 10;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} ECgrAE8K_ctx_t;

void init_ctx(ECgrAE8K_ctx_t *ctx) {
    ctx->id = 1025;
    ctx->coefficient = 4.7;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} e10eKg9D_ctx_t;

void init_ctx(e10eKg9D_ctx_t *ctx) {
    ctx->id = 9360;
    ctx->coefficient = 8.2;
    ctx->flags = 107;
}

int compute_8Klk0wv(int input) {
    int result = input * 54;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} FgLx6OOe_ctx_t;

void init_ctx(FgLx6OOe_ctx_t *ctx) {
    ctx->id = 9260;
    ctx->coefficient = 4.4;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} kCb2HYMm_ctx_t;

void init_ctx(kCb2HYMm_ctx_t *ctx) {
    ctx->id = 4852;
    ctx->coefficient = 2.4;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} ylP0yxwB_ctx_t;

void init_ctx(ylP0yxwB_ctx_t *ctx) {
    ctx->id = 8419;
    ctx->coefficient = 3.9;
    ctx->flags = 186;
}

int compute_JhPnZMy(int input) {
    int result = input * 52;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} GBEz6cMo_ctx_t;

void init_ctx(GBEz6cMo_ctx_t *ctx) {
    ctx->id = 7099;
    ctx->coefficient = 4.5;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} tVlr7sdm_ctx_t;

void init_ctx(tVlr7sdm_ctx_t *ctx) {
    ctx->id = 7609;
    ctx->coefficient = 7.9;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 7SZgijn1_ctx_t;

void init_ctx(7SZgijn1_ctx_t *ctx) {
    ctx->id = 6595;
    ctx->coefficient = 8.1;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} hPewS4gP_ctx_t;

void init_ctx(hPewS4gP_ctx_t *ctx) {
    ctx->id = 7112;
    ctx->coefficient = 6.4;
    ctx->flags = 163;
}

int compute_RuX1tcx(int input) {
    int result = input * 26;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 2yN3uSS7_ctx_t;

void init_ctx(2yN3uSS7_ctx_t *ctx) {
    ctx->id = 1885;
    ctx->coefficient = 6.9;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} fsD8f3Vn_ctx_t;

void init_ctx(fsD8f3Vn_ctx_t *ctx) {
    ctx->id = 9671;
    ctx->coefficient = 1.7;
    ctx->flags = 125;
}

int compute_vgpCSpg(int input) {
    int result = input * 31;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 1SMr0LtY_ctx_t;

void init_ctx(1SMr0LtY_ctx_t *ctx) {
    ctx->id = 7458;
    ctx->coefficient = 4.9;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Z5Yp58xg_ctx_t;

void init_ctx(Z5Yp58xg_ctx_t *ctx) {
    ctx->id = 1519;
    ctx->coefficient = 8.0;
    ctx->flags = 76;
}

int compute_ZEUhnBL(int input) {
    int result = input * 62;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 5CH10BK2_ctx_t;

void init_ctx(5CH10BK2_ctx_t *ctx) {
    ctx->id = 9613;
    ctx->coefficient = 8.9;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} s6t0XbCg_ctx_t;

void init_ctx(s6t0XbCg_ctx_t *ctx) {
    ctx->id = 4786;
    ctx->coefficient = 9.6;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} jMNRxnyS_ctx_t;

void init_ctx(jMNRxnyS_ctx_t *ctx) {
    ctx->id = 3179;
    ctx->coefficient = 5.0;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} HD9KLzfj_ctx_t;

void init_ctx(HD9KLzfj_ctx_t *ctx) {
    ctx->id = 5537;
    ctx->coefficient = 2.7;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} E7IyUQ5V_ctx_t;

void init_ctx(E7IyUQ5V_ctx_t *ctx) {
    ctx->id = 8132;
    ctx->coefficient = 4.8;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 539ftDCl_ctx_t;

void init_ctx(539ftDCl_ctx_t *ctx) {
    ctx->id = 3830;
    ctx->coefficient = 3.1;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} xpScHQoT_ctx_t;

void init_ctx(xpScHQoT_ctx_t *ctx) {
    ctx->id = 8349;
    ctx->coefficient = 0.1;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} oKRH2RQ4_ctx_t;

void init_ctx(oKRH2RQ4_ctx_t *ctx) {
    ctx->id = 2512;
    ctx->coefficient = 3.1;
    ctx->flags = 72;
}

int compute_NA4klxC(int input) {
    int result = input * 29;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} HwWiSESp_ctx_t;

void init_ctx(HwWiSESp_ctx_t *ctx) {
    ctx->id = 2849;
    ctx->coefficient = 9.5;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} ioAhF3qf_ctx_t;

void init_ctx(ioAhF3qf_ctx_t *ctx) {
    ctx->id = 1756;
    ctx->coefficient = 2.1;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} hjvPhqAG_ctx_t;

void init_ctx(hjvPhqAG_ctx_t *ctx) {
    ctx->id = 6209;
    ctx->coefficient = 8.5;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} KHfHohGM_ctx_t;

void init_ctx(KHfHohGM_ctx_t *ctx) {
    ctx->id = 1405;
    ctx->coefficient = 5.6;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} U0CzWwgW_ctx_t;

void init_ctx(U0CzWwgW_ctx_t *ctx) {
    ctx->id = 8088;
    ctx->coefficient = 5.2;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} gsvB3vA2_ctx_t;

void init_ctx(gsvB3vA2_ctx_t *ctx) {
    ctx->id = 8675;
    ctx->coefficient = 2.6;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} CjK1dyxu_ctx_t;

void init_ctx(CjK1dyxu_ctx_t *ctx) {
    ctx->id = 6856;
    ctx->coefficient = 3.3;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} mBszyBw4_ctx_t;

void init_ctx(mBszyBw4_ctx_t *ctx) {
    ctx->id = 7525;
    ctx->coefficient = 7.9;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} HetkmYAh_ctx_t;

void init_ctx(HetkmYAh_ctx_t *ctx) {
    ctx->id = 6046;
    ctx->coefficient = 7.3;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} oJctL9wG_ctx_t;

void init_ctx(oJctL9wG_ctx_t *ctx) {
    ctx->id = 5858;
    ctx->coefficient = 3.5;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} G6uh7kKx_ctx_t;

void init_ctx(G6uh7kKx_ctx_t *ctx) {
    ctx->id = 5816;
    ctx->coefficient = 3.8;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} c8JscpWi_ctx_t;

void init_ctx(c8JscpWi_ctx_t *ctx) {
    ctx->id = 4559;
    ctx->coefficient = 4.0;
    ctx->flags = 157;
}

int compute_rF3q7Pu(int input) {
    int result = input * 30;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} xt2BTani_ctx_t;

void init_ctx(xt2BTani_ctx_t *ctx) {
    ctx->id = 1207;
    ctx->coefficient = 0.1;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} RemvZOLo_ctx_t;

void init_ctx(RemvZOLo_ctx_t *ctx) {
    ctx->id = 4185;
    ctx->coefficient = 9.9;
    ctx->flags = 248;
}

int compute_QjHp4zG(int input) {
    int result = input * 8;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} qEOUKxLM_ctx_t;

void init_ctx(qEOUKxLM_ctx_t *ctx) {
    ctx->id = 4724;
    ctx->coefficient = 6.1;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} vOxmHSvm_ctx_t;

void init_ctx(vOxmHSvm_ctx_t *ctx) {
    ctx->id = 2552;
    ctx->coefficient = 6.7;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} BXOdsUw3_ctx_t;

void init_ctx(BXOdsUw3_ctx_t *ctx) {
    ctx->id = 4617;
    ctx->coefficient = 4.9;
    ctx->flags = 98;
}

int compute_Ksz23Y4(int input) {
    int result = input * 8;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 9xtCL4Ow_ctx_t;

void init_ctx(9xtCL4Ow_ctx_t *ctx) {
    ctx->id = 7030;
    ctx->coefficient = 9.2;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} fAiOW3Oo_ctx_t;

void init_ctx(fAiOW3Oo_ctx_t *ctx) {
    ctx->id = 2952;
    ctx->coefficient = 5.8;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} W9MkwTXV_ctx_t;

void init_ctx(W9MkwTXV_ctx_t *ctx) {
    ctx->id = 1345;
    ctx->coefficient = 5.5;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} KQS9zQ53_ctx_t;

void init_ctx(KQS9zQ53_ctx_t *ctx) {
    ctx->id = 4159;
    ctx->coefficient = 0.4;
    ctx->flags = 192;
}

int compute_zQl7Neg(int input) {
    int result = input * 35;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_35aA7bI(int input) {
    int result = input * 45;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} PaTb4T2x_ctx_t;

void init_ctx(PaTb4T2x_ctx_t *ctx) {
    ctx->id = 7643;
    ctx->coefficient = 4.6;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 7snJ5KTB_ctx_t;

void init_ctx(7snJ5KTB_ctx_t *ctx) {
    ctx->id = 9616;
    ctx->coefficient = 4.0;
    ctx->flags = 70;
}

int compute_6R2T0ge(int input) {
    int result = input * 15;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} RhIZj8M1_ctx_t;

void init_ctx(RhIZj8M1_ctx_t *ctx) {
    ctx->id = 9801;
    ctx->coefficient = 7.5;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} WaYtpWi4_ctx_t;

void init_ctx(WaYtpWi4_ctx_t *ctx) {
    ctx->id = 7342;
    ctx->coefficient = 8.5;
    ctx->flags = 95;
}

int compute_sMwUyTQ(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} f9e2D5hM_ctx_t;

void init_ctx(f9e2D5hM_ctx_t *ctx) {
    ctx->id = 2979;
    ctx->coefficient = 1.1;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} E6mQzyHP_ctx_t;

void init_ctx(E6mQzyHP_ctx_t *ctx) {
    ctx->id = 8712;
    ctx->coefficient = 5.5;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 4BHx5xPy_ctx_t;

void init_ctx(4BHx5xPy_ctx_t *ctx) {
    ctx->id = 4324;
    ctx->coefficient = 3.3;
    ctx->flags = 168;
}

int compute_oGH52iX(int input) {
    int result = input * 4;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} INtxGyRA_ctx_t;

void init_ctx(INtxGyRA_ctx_t *ctx) {
    ctx->id = 1544;
    ctx->coefficient = 2.4;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} ZMQt3JVI_ctx_t;

void init_ctx(ZMQt3JVI_ctx_t *ctx) {
    ctx->id = 1106;
    ctx->coefficient = 8.5;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} GxTtfxX6_ctx_t;

void init_ctx(GxTtfxX6_ctx_t *ctx) {
    ctx->id = 9554;
    ctx->coefficient = 3.0;
    ctx->flags = 29;
}

int compute_u7enFgi(int input) {
    int result = input * 65;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} UEJI8GXn_ctx_t;

void init_ctx(UEJI8GXn_ctx_t *ctx) {
    ctx->id = 8711;
    ctx->coefficient = 6.9;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} qs98jKWS_ctx_t;

void init_ctx(qs98jKWS_ctx_t *ctx) {
    ctx->id = 2315;
    ctx->coefficient = 0.3;
    ctx->flags = 150;
}

int compute_l5YEA1x(int input) {
    int result = input * 14;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_tslOxNv(int input) {
    int result = input * 35;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} kdiqaxHS_ctx_t;

void init_ctx(kdiqaxHS_ctx_t *ctx) {
    ctx->id = 5581;
    ctx->coefficient = 8.6;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} pvKW5IB0_ctx_t;

void init_ctx(pvKW5IB0_ctx_t *ctx) {
    ctx->id = 4832;
    ctx->coefficient = 2.3;
    ctx->flags = 133;
}

int compute_GqU9NPA(int input) {
    int result = input * 50;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} fPClHUTc_ctx_t;

void init_ctx(fPClHUTc_ctx_t *ctx) {
    ctx->id = 6284;
    ctx->coefficient = 0.6;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} HHNWEhzO_ctx_t;

void init_ctx(HHNWEhzO_ctx_t *ctx) {
    ctx->id = 9793;
    ctx->coefficient = 2.2;
    ctx->flags = 156;
}

int compute_NecHuLs(int input) {
    int result = input * 63;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_iIG90vB(int input) {
    int result = input * 67;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} aMsVTgoC_ctx_t;

void init_ctx(aMsVTgoC_ctx_t *ctx) {
    ctx->id = 8768;
    ctx->coefficient = 6.1;
    ctx->flags = 239;
}

int compute_TeyKxCa(int input) {
    int result = input * 12;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} ygkjANtq_ctx_t;

void init_ctx(ygkjANtq_ctx_t *ctx) {
    ctx->id = 4075;
    ctx->coefficient = 9.2;
    ctx->flags = 237;
}

int compute_a43Nl2V(int input) {
    int result = input * 25;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} DROVWX8D_ctx_t;

void init_ctx(DROVWX8D_ctx_t *ctx) {
    ctx->id = 8683;
    ctx->coefficient = 4.3;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} tIJF0ikj_ctx_t;

void init_ctx(tIJF0ikj_ctx_t *ctx) {
    ctx->id = 4182;
    ctx->coefficient = 3.8;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} d8bNBv4X_ctx_t;

void init_ctx(d8bNBv4X_ctx_t *ctx) {
    ctx->id = 4291;
    ctx->coefficient = 1.6;
    ctx->flags = 182;
}

int compute_5WjuSEV(int input) {
    int result = input * 10;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} mU7GuwdC_ctx_t;

void init_ctx(mU7GuwdC_ctx_t *ctx) {
    ctx->id = 9293;
    ctx->coefficient = 0.3;
    ctx->flags = 141;
}

int compute_fmSCLec(int input) {
    int result = input * 20;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 9n5eG7K9_ctx_t;

void init_ctx(9n5eG7K9_ctx_t *ctx) {
    ctx->id = 4230;
    ctx->coefficient = 2.2;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} MYhFgQQM_ctx_t;

void init_ctx(MYhFgQQM_ctx_t *ctx) {
    ctx->id = 7928;
    ctx->coefficient = 3.2;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} qhe8hHhl_ctx_t;

void init_ctx(qhe8hHhl_ctx_t *ctx) {
    ctx->id = 2170;
    ctx->coefficient = 1.7;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 0reslRFi_ctx_t;

void init_ctx(0reslRFi_ctx_t *ctx) {
    ctx->id = 2195;
    ctx->coefficient = 8.5;
    ctx->flags = 253;
}

int compute_KeCGEWF(int input) {
    int result = input * 9;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 7UA23EWA_ctx_t;

void init_ctx(7UA23EWA_ctx_t *ctx) {
    ctx->id = 2369;
    ctx->coefficient = 8.7;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} bK4xCAf3_ctx_t;

void init_ctx(bK4xCAf3_ctx_t *ctx) {
    ctx->id = 4764;
    ctx->coefficient = 6.7;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} WNikjnS2_ctx_t;

void init_ctx(WNikjnS2_ctx_t *ctx) {
    ctx->id = 5832;
    ctx->coefficient = 9.8;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} U3F7ygsS_ctx_t;

void init_ctx(U3F7ygsS_ctx_t *ctx) {
    ctx->id = 5769;
    ctx->coefficient = 5.5;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} i6qIzAlt_ctx_t;

void init_ctx(i6qIzAlt_ctx_t *ctx) {
    ctx->id = 6747;
    ctx->coefficient = 10.0;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 88hImrCC_ctx_t;

void init_ctx(88hImrCC_ctx_t *ctx) {
    ctx->id = 5444;
    ctx->coefficient = 9.3;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} LQC339Bh_ctx_t;

void init_ctx(LQC339Bh_ctx_t *ctx) {
    ctx->id = 6507;
    ctx->coefficient = 4.5;
    ctx->flags = 124;
}

int compute_GcOXpSb(int input) {
    int result = input * 22;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 2x0N8jMu_ctx_t;

void init_ctx(2x0N8jMu_ctx_t *ctx) {
    ctx->id = 6719;
    ctx->coefficient = 6.0;
    ctx->flags = 196;
}

int compute_O4TTyp6(int input) {
    int result = input * 24;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} yMMjt9fs_ctx_t;

void init_ctx(yMMjt9fs_ctx_t *ctx) {
    ctx->id = 8489;
    ctx->coefficient = 4.6;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 20qbAlAW_ctx_t;

void init_ctx(20qbAlAW_ctx_t *ctx) {
    ctx->id = 8555;
    ctx->coefficient = 1.3;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} hku4SATL_ctx_t;

void init_ctx(hku4SATL_ctx_t *ctx) {
    ctx->id = 4851;
    ctx->coefficient = 6.8;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 8meuNFZc_ctx_t;

void init_ctx(8meuNFZc_ctx_t *ctx) {
    ctx->id = 1092;
    ctx->coefficient = 1.9;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} Y8N4S7D9_ctx_t;

void init_ctx(Y8N4S7D9_ctx_t *ctx) {
    ctx->id = 3350;
    ctx->coefficient = 8.4;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} rRIKFe1N_ctx_t;

void init_ctx(rRIKFe1N_ctx_t *ctx) {
    ctx->id = 2809;
    ctx->coefficient = 7.2;
    ctx->flags = 236;
}

int compute_gUje8hu(int input) {
    int result = input * 35;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_GyEdh7q(int input) {
    int result = input * 14;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_VcbmKXm(int input) {
    int result = input * 7;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_JQNYNz5(int input) {
    int result = input * 15;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_XzPWPGE(int input) {
    int result = input * 25;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 1poXzRLz_ctx_t;

void init_ctx(1poXzRLz_ctx_t *ctx) {
    ctx->id = 5794;
    ctx->coefficient = 2.3;
    ctx->flags = 142;
}

int compute_YZnt5Rg(int input) {
    int result = input * 63;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} wOxhVdvZ_ctx_t;

void init_ctx(wOxhVdvZ_ctx_t *ctx) {
    ctx->id = 3542;
    ctx->coefficient = 7.3;
    ctx->flags = 5;
}

int compute_Wc2pW0H(int input) {
    int result = input * 10;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} E6H8h4ZU_ctx_t;

void init_ctx(E6H8h4ZU_ctx_t *ctx) {
    ctx->id = 5104;
    ctx->coefficient = 2.1;
    ctx->flags = 231;
}

int compute_N7d9Psn(int input) {
    int result = input * 49;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} g2HOGtJ0_ctx_t;

void init_ctx(g2HOGtJ0_ctx_t *ctx) {
    ctx->id = 7773;
    ctx->coefficient = 7.0;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} XIMYXkk4_ctx_t;

void init_ctx(XIMYXkk4_ctx_t *ctx) {
    ctx->id = 6703;
    ctx->coefficient = 2.9;
    ctx->flags = 218;
}

int compute_0pRoqOi(int input) {
    int result = input * 67;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_dIH2Q54(int input) {
    int result = input * 58;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} FbzapmSv_ctx_t;

void init_ctx(FbzapmSv_ctx_t *ctx) {
    ctx->id = 7025;
    ctx->coefficient = 2.7;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} z0Mz88Ea_ctx_t;

void init_ctx(z0Mz88Ea_ctx_t *ctx) {
    ctx->id = 1945;
    ctx->coefficient = 9.2;
    ctx->flags = 174;
}

int compute_tqhioaQ(int input) {
    int result = input * 22;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_fQDFYpz(int input) {
    int result = input * 8;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} MVwkEosB_ctx_t;

void init_ctx(MVwkEosB_ctx_t *ctx) {
    ctx->id = 4356;
    ctx->coefficient = 3.6;
    ctx->flags = 82;
}

int compute_F3tEYIv(int input) {
    int result = input * 68;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} wnu3EJyS_ctx_t;

void init_ctx(wnu3EJyS_ctx_t *ctx) {
    ctx->id = 2792;
    ctx->coefficient = 4.8;
    ctx->flags = 236;
}

int compute_WgSWMbq(int input) {
    int result = input * 32;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_6Up89Uv(int input) {
    int result = input * 33;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} eJyR0mjG_ctx_t;

void init_ctx(eJyR0mjG_ctx_t *ctx) {
    ctx->id = 5148;
    ctx->coefficient = 9.1;
    ctx->flags = 227;
}

int compute_Bv4TOV2(int input) {
    int result = input * 44;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} mwYonbPU_ctx_t;

void init_ctx(mwYonbPU_ctx_t *ctx) {
    ctx->id = 5249;
    ctx->coefficient = 6.1;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} xdsYEWWZ_ctx_t;

void init_ctx(xdsYEWWZ_ctx_t *ctx) {
    ctx->id = 9288;
    ctx->coefficient = 2.7;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} RvHF9G8v_ctx_t;

void init_ctx(RvHF9G8v_ctx_t *ctx) {
    ctx->id = 3823;
    ctx->coefficient = 0.7;
    ctx->flags = 67;
}

int compute_2LxsmPU(int input) {
    int result = input * 65;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} HjtbMSig_ctx_t;

void init_ctx(HjtbMSig_ctx_t *ctx) {
    ctx->id = 4375;
    ctx->coefficient = 2.4;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} Dz8Toi1F_ctx_t;

void init_ctx(Dz8Toi1F_ctx_t *ctx) {
    ctx->id = 8324;
    ctx->coefficient = 1.5;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} MWkr95af_ctx_t;

void init_ctx(MWkr95af_ctx_t *ctx) {
    ctx->id = 5767;
    ctx->coefficient = 7.4;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} EEdfpE8j_ctx_t;

void init_ctx(EEdfpE8j_ctx_t *ctx) {
    ctx->id = 6165;
    ctx->coefficient = 4.6;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} z0HqydA3_ctx_t;

void init_ctx(z0HqydA3_ctx_t *ctx) {
    ctx->id = 8326;
    ctx->coefficient = 1.1;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 5uLJbM0B_ctx_t;

void init_ctx(5uLJbM0B_ctx_t *ctx) {
    ctx->id = 2034;
    ctx->coefficient = 2.1;
    ctx->flags = 75;
}

int compute_QCw7X1G(int input) {
    int result = input * 29;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} xHcvHL1j_ctx_t;

void init_ctx(xHcvHL1j_ctx_t *ctx) {
    ctx->id = 9571;
    ctx->coefficient = 0.3;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} LwqgPKuj_ctx_t;

void init_ctx(LwqgPKuj_ctx_t *ctx) {
    ctx->id = 8674;
    ctx->coefficient = 1.3;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} HlWBhy4h_ctx_t;

void init_ctx(HlWBhy4h_ctx_t *ctx) {
    ctx->id = 6770;
    ctx->coefficient = 6.1;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 07wsOoRX_ctx_t;

void init_ctx(07wsOoRX_ctx_t *ctx) {
    ctx->id = 2305;
    ctx->coefficient = 7.0;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} fTARRIS4_ctx_t;

void init_ctx(fTARRIS4_ctx_t *ctx) {
    ctx->id = 2245;
    ctx->coefficient = 5.4;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} zyVLygXO_ctx_t;

void init_ctx(zyVLygXO_ctx_t *ctx) {
    ctx->id = 5401;
    ctx->coefficient = 4.3;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} h5Shk48A_ctx_t;

void init_ctx(h5Shk48A_ctx_t *ctx) {
    ctx->id = 3214;
    ctx->coefficient = 9.7;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} pRf0xViM_ctx_t;

void init_ctx(pRf0xViM_ctx_t *ctx) {
    ctx->id = 8789;
    ctx->coefficient = 9.6;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} h8LoPipI_ctx_t;

void init_ctx(h8LoPipI_ctx_t *ctx) {
    ctx->id = 7056;
    ctx->coefficient = 5.7;
    ctx->flags = 77;
}

int compute_HjLCZW1(int input) {
    int result = input * 62;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} ybUMaxSd_ctx_t;

void init_ctx(ybUMaxSd_ctx_t *ctx) {
    ctx->id = 3191;
    ctx->coefficient = 0.2;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} ospykuGW_ctx_t;

void init_ctx(ospykuGW_ctx_t *ctx) {
    ctx->id = 1213;
    ctx->coefficient = 3.5;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} lDZ046dK_ctx_t;

void init_ctx(lDZ046dK_ctx_t *ctx) {
    ctx->id = 9805;
    ctx->coefficient = 9.5;
    ctx->flags = 229;
}

int compute_QYMJRYh(int input) {
    int result = input * 64;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_nZdk1WH(int input) {
    int result = input * 23;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} fAQF70yS_ctx_t;

void init_ctx(fAQF70yS_ctx_t *ctx) {
    ctx->id = 2903;
    ctx->coefficient = 8.1;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} lArTNDfU_ctx_t;

void init_ctx(lArTNDfU_ctx_t *ctx) {
    ctx->id = 4006;
    ctx->coefficient = 2.6;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} VYD2ZcWB_ctx_t;

void init_ctx(VYD2ZcWB_ctx_t *ctx) {
    ctx->id = 8452;
    ctx->coefficient = 6.8;
    ctx->flags = 131;
}

int compute_yhtBwC1(int input) {
    int result = input * 57;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_Z18aLo3(int input) {
    int result = input * 53;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 5lI9nnOC_ctx_t;

void init_ctx(5lI9nnOC_ctx_t *ctx) {
    ctx->id = 2627;
    ctx->coefficient = 7.7;
    ctx->flags = 207;
}

int compute_ZWzWyum(int input) {
    int result = input * 12;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_eTK4qE2(int input) {
    int result = input * 68;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} rpk5gQxZ_ctx_t;

void init_ctx(rpk5gQxZ_ctx_t *ctx) {
    ctx->id = 4577;
    ctx->coefficient = 2.2;
    ctx->flags = 214;
}

int compute_MslVVJx(int input) {
    int result = input * 45;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 9uF2Rga1_ctx_t;

void init_ctx(9uF2Rga1_ctx_t *ctx) {
    ctx->id = 1229;
    ctx->coefficient = 4.9;
    ctx->flags = 49;
}

int compute_MJ33kAb(int input) {
    int result = input * 28;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_Op1DIm9(int input) {
    int result = input * 27;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_I227Jbu(int input) {
    int result = input * 46;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} rh1nkMk2_ctx_t;

void init_ctx(rh1nkMk2_ctx_t *ctx) {
    ctx->id = 8638;
    ctx->coefficient = 8.3;
    ctx->flags = 118;
}

int compute_S8cukSd(int input) {
    int result = input * 4;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} g5vCUaux_ctx_t;

void init_ctx(g5vCUaux_ctx_t *ctx) {
    ctx->id = 4410;
    ctx->coefficient = 2.2;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} OjUOa8C7_ctx_t;

void init_ctx(OjUOa8C7_ctx_t *ctx) {
    ctx->id = 4260;
    ctx->coefficient = 5.3;
    ctx->flags = 228;
}

int compute_99yWn7Q(int input) {
    int result = input * 3;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 61i3t487_ctx_t;

void init_ctx(61i3t487_ctx_t *ctx) {
    ctx->id = 9465;
    ctx->coefficient = 7.2;
    ctx->flags = 80;
}

int compute_rYK3m7v(int input) {
    int result = input * 68;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_jTIF76w(int input) {
    int result = input * 12;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} axCqzDiQ_ctx_t;

void init_ctx(axCqzDiQ_ctx_t *ctx) {
    ctx->id = 1640;
    ctx->coefficient = 0.3;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} lXAvizZs_ctx_t;

void init_ctx(lXAvizZs_ctx_t *ctx) {
    ctx->id = 5215;
    ctx->coefficient = 6.8;
    ctx->flags = 204;
}

int compute_Or0BElO(int input) {
    int result = input * 62;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 6z2PDy1V_ctx_t;

void init_ctx(6z2PDy1V_ctx_t *ctx) {
    ctx->id = 9699;
    ctx->coefficient = 5.8;
    ctx->flags = 75;
}

int compute_aJur8Ja(int input) {
    int result = input * 50;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} HxkyNhE1_ctx_t;

void init_ctx(HxkyNhE1_ctx_t *ctx) {
    ctx->id = 4255;
    ctx->coefficient = 8.5;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} uarPR9Cl_ctx_t;

void init_ctx(uarPR9Cl_ctx_t *ctx) {
    ctx->id = 7200;
    ctx->coefficient = 0.1;
    ctx->flags = 153;
}

int compute_wkxGXTP(int input) {
    int result = input * 4;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} jgYqgyzB_ctx_t;

void init_ctx(jgYqgyzB_ctx_t *ctx) {
    ctx->id = 9615;
    ctx->coefficient = 2.8;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} lR8I2WlE_ctx_t;

void init_ctx(lR8I2WlE_ctx_t *ctx) {
    ctx->id = 8419;
    ctx->coefficient = 0.6;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} U9jy6UXU_ctx_t;

void init_ctx(U9jy6UXU_ctx_t *ctx) {
    ctx->id = 2208;
    ctx->coefficient = 7.2;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} IU3NET3O_ctx_t;

void init_ctx(IU3NET3O_ctx_t *ctx) {
    ctx->id = 8274;
    ctx->coefficient = 0.9;
    ctx->flags = 219;
}

int compute_7lUwtVM(int input) {
    int result = input * 68;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} kaSgyC3m_ctx_t;

void init_ctx(kaSgyC3m_ctx_t *ctx) {
    ctx->id = 4366;
    ctx->coefficient = 1.4;
    ctx->flags = 127;
}

int compute_Mh3O7KM(int input) {
    int result = input * 65;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} OjszWSfp_ctx_t;

void init_ctx(OjszWSfp_ctx_t *ctx) {
    ctx->id = 3046;
    ctx->coefficient = 5.2;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} VpqhwrVI_ctx_t;

void init_ctx(VpqhwrVI_ctx_t *ctx) {
    ctx->id = 6904;
    ctx->coefficient = 4.7;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} k1uCb5yF_ctx_t;

void init_ctx(k1uCb5yF_ctx_t *ctx) {
    ctx->id = 1814;
    ctx->coefficient = 2.6;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 4sfz5eZE_ctx_t;

void init_ctx(4sfz5eZE_ctx_t *ctx) {
    ctx->id = 6453;
    ctx->coefficient = 0.1;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 3lHB6qwr_ctx_t;

void init_ctx(3lHB6qwr_ctx_t *ctx) {
    ctx->id = 1737;
    ctx->coefficient = 3.3;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} ExPCI2eo_ctx_t;

void init_ctx(ExPCI2eo_ctx_t *ctx) {
    ctx->id = 9938;
    ctx->coefficient = 9.9;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 72gsNBve_ctx_t;

void init_ctx(72gsNBve_ctx_t *ctx) {
    ctx->id = 3340;
    ctx->coefficient = 2.8;
    ctx->flags = 185;
}

int compute_WZFPFe5(int input) {
    int result = input * 60;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 1ld6Depz_ctx_t;

void init_ctx(1ld6Depz_ctx_t *ctx) {
    ctx->id = 6912;
    ctx->coefficient = 4.4;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} pxUWteAo_ctx_t;

void init_ctx(pxUWteAo_ctx_t *ctx) {
    ctx->id = 7688;
    ctx->coefficient = 1.8;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} VGsf8vC7_ctx_t;

void init_ctx(VGsf8vC7_ctx_t *ctx) {
    ctx->id = 8936;
    ctx->coefficient = 9.4;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} qSl1xHVI_ctx_t;

void init_ctx(qSl1xHVI_ctx_t *ctx) {
    ctx->id = 4238;
    ctx->coefficient = 5.7;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} kKZWvTWh_ctx_t;

void init_ctx(kKZWvTWh_ctx_t *ctx) {
    ctx->id = 7413;
    ctx->coefficient = 5.8;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} LtP3UOgZ_ctx_t;

void init_ctx(LtP3UOgZ_ctx_t *ctx) {
    ctx->id = 2488;
    ctx->coefficient = 6.7;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} tSMIUnTv_ctx_t;

void init_ctx(tSMIUnTv_ctx_t *ctx) {
    ctx->id = 3169;
    ctx->coefficient = 2.8;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} vtkriGRr_ctx_t;

void init_ctx(vtkriGRr_ctx_t *ctx) {
    ctx->id = 1848;
    ctx->coefficient = 2.3;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 3cDJ7QYG_ctx_t;

void init_ctx(3cDJ7QYG_ctx_t *ctx) {
    ctx->id = 9885;
    ctx->coefficient = 1.5;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} uLv27xWs_ctx_t;

void init_ctx(uLv27xWs_ctx_t *ctx) {
    ctx->id = 1955;
    ctx->coefficient = 2.3;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} nY0mdqCt_ctx_t;

void init_ctx(nY0mdqCt_ctx_t *ctx) {
    ctx->id = 8380;
    ctx->coefficient = 6.0;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} xzxSajGg_ctx_t;

void init_ctx(xzxSajGg_ctx_t *ctx) {
    ctx->id = 4597;
    ctx->coefficient = 8.7;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 8xKyGagE_ctx_t;

void init_ctx(8xKyGagE_ctx_t *ctx) {
    ctx->id = 5264;
    ctx->coefficient = 2.5;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} LY3afIao_ctx_t;

void init_ctx(LY3afIao_ctx_t *ctx) {
    ctx->id = 7471;
    ctx->coefficient = 1.9;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} VvSqIYVA_ctx_t;

void init_ctx(VvSqIYVA_ctx_t *ctx) {
    ctx->id = 7925;
    ctx->coefficient = 1.1;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} zkbvVN4m_ctx_t;

void init_ctx(zkbvVN4m_ctx_t *ctx) {
    ctx->id = 6702;
    ctx->coefficient = 1.0;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Xe1H5MjR_ctx_t;

void init_ctx(Xe1H5MjR_ctx_t *ctx) {
    ctx->id = 8548;
    ctx->coefficient = 5.7;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} us2tSKQG_ctx_t;

void init_ctx(us2tSKQG_ctx_t *ctx) {
    ctx->id = 2959;
    ctx->coefficient = 2.6;
    ctx->flags = 31;
}

int compute_MEPdBcF(int input) {
    int result = input * 4;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} vtPye4yg_ctx_t;

void init_ctx(vtPye4yg_ctx_t *ctx) {
    ctx->id = 4183;
    ctx->coefficient = 5.1;
    ctx->flags = 81;
}

int compute_pxtHzrA(int input) {
    int result = input * 40;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_T4carpF(int input) {
    int result = input * 46;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_yN4q9vA(int input) {
    int result = input * 12;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_IaxlOyT(int input) {
    int result = input * 32;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_eyAl5L0(int input) {
    int result = input * 26;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} pYMIOcVl_ctx_t;

void init_ctx(pYMIOcVl_ctx_t *ctx) {
    ctx->id = 8467;
    ctx->coefficient = 0.6;
    ctx->flags = 37;
}

int compute_UICcvhN(int input) {
    int result = input * 59;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} OmDAvudZ_ctx_t;

void init_ctx(OmDAvudZ_ctx_t *ctx) {
    ctx->id = 7974;
    ctx->coefficient = 0.8;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} VxDpTmWz_ctx_t;

void init_ctx(VxDpTmWz_ctx_t *ctx) {
    ctx->id = 4761;
    ctx->coefficient = 0.6;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} bNezcM4G_ctx_t;

void init_ctx(bNezcM4G_ctx_t *ctx) {
    ctx->id = 1252;
    ctx->coefficient = 1.5;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} K1ITLdMO_ctx_t;

void init_ctx(K1ITLdMO_ctx_t *ctx) {
    ctx->id = 6338;
    ctx->coefficient = 2.5;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} hjgTjUAe_ctx_t;

void init_ctx(hjgTjUAe_ctx_t *ctx) {
    ctx->id = 6450;
    ctx->coefficient = 4.4;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 9OZtmysQ_ctx_t;

void init_ctx(9OZtmysQ_ctx_t *ctx) {
    ctx->id = 5746;
    ctx->coefficient = 8.6;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} fqqZMSw5_ctx_t;

void init_ctx(fqqZMSw5_ctx_t *ctx) {
    ctx->id = 3966;
    ctx->coefficient = 2.6;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} LU5IzorJ_ctx_t;

void init_ctx(LU5IzorJ_ctx_t *ctx) {
    ctx->id = 8632;
    ctx->coefficient = 5.0;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} VYfE4LWS_ctx_t;

void init_ctx(VYfE4LWS_ctx_t *ctx) {
    ctx->id = 3982;
    ctx->coefficient = 0.7;
    ctx->flags = 237;
}

int compute_DagQBPz(int input) {
    int result = input * 68;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_YMKNc0v(int input) {
    int result = input * 60;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_2ODoSFS(int input) {
    int result = input * 13;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} IRvlZGsK_ctx_t;

void init_ctx(IRvlZGsK_ctx_t *ctx) {
    ctx->id = 8977;
    ctx->coefficient = 4.2;
    ctx->flags = 201;
}

int compute_EDxpwPj(int input) {
    int result = input * 23;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} pAOvjj03_ctx_t;

void init_ctx(pAOvjj03_ctx_t *ctx) {
    ctx->id = 6796;
    ctx->coefficient = 4.8;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} f6Ye6nBF_ctx_t;

void init_ctx(f6Ye6nBF_ctx_t *ctx) {
    ctx->id = 8493;
    ctx->coefficient = 4.1;
    ctx->flags = 114;
}

int compute_luXWMWf(int input) {
    int result = input * 6;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} UL5r3UXi_ctx_t;

void init_ctx(UL5r3UXi_ctx_t *ctx) {
    ctx->id = 3125;
    ctx->coefficient = 5.7;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} vl2LLNth_ctx_t;

void init_ctx(vl2LLNth_ctx_t *ctx) {
    ctx->id = 9420;
    ctx->coefficient = 0.7;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} H5lZk4Ju_ctx_t;

void init_ctx(H5lZk4Ju_ctx_t *ctx) {
    ctx->id = 4327;
    ctx->coefficient = 1.2;
    ctx->flags = 37;
}

int compute_SpPcxAD(int input) {
    int result = input * 25;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_TIdd1WH(int input) {
    int result = input * 45;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} eDuzlaNI_ctx_t;

void init_ctx(eDuzlaNI_ctx_t *ctx) {
    ctx->id = 2222;
    ctx->coefficient = 3.4;
    ctx->flags = 18;
}

int compute_7xaU1aa(int input) {
    int result = input * 54;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_YUXtZaq(int input) {
    int result = input * 49;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} V62M9O1o_ctx_t;

void init_ctx(V62M9O1o_ctx_t *ctx) {
    ctx->id = 9075;
    ctx->coefficient = 5.0;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} NCNGmZbz_ctx_t;

void init_ctx(NCNGmZbz_ctx_t *ctx) {
    ctx->id = 4756;
    ctx->coefficient = 7.7;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} Sp13qoW0_ctx_t;

void init_ctx(Sp13qoW0_ctx_t *ctx) {
    ctx->id = 6740;
    ctx->coefficient = 1.5;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 9T05mfxD_ctx_t;

void init_ctx(9T05mfxD_ctx_t *ctx) {
    ctx->id = 4109;
    ctx->coefficient = 4.3;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} JG6YVEvW_ctx_t;

void init_ctx(JG6YVEvW_ctx_t *ctx) {
    ctx->id = 7281;
    ctx->coefficient = 2.0;
    ctx->flags = 99;
}

int compute_w7AkiXb(int input) {
    int result = input * 20;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_B4YEerz(int input) {
    int result = input * 6;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} jvBTvotF_ctx_t;

void init_ctx(jvBTvotF_ctx_t *ctx) {
    ctx->id = 9758;
    ctx->coefficient = 8.8;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 5jjCQDmn_ctx_t;

void init_ctx(5jjCQDmn_ctx_t *ctx) {
    ctx->id = 8564;
    ctx->coefficient = 5.1;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} BwCBDoky_ctx_t;

void init_ctx(BwCBDoky_ctx_t *ctx) {
    ctx->id = 1593;
    ctx->coefficient = 9.0;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} z6ahZyY0_ctx_t;

void init_ctx(z6ahZyY0_ctx_t *ctx) {
    ctx->id = 2181;
    ctx->coefficient = 3.1;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} m4nA8Npu_ctx_t;

void init_ctx(m4nA8Npu_ctx_t *ctx) {
    ctx->id = 7114;
    ctx->coefficient = 8.0;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 0Qp3bQTv_ctx_t;

void init_ctx(0Qp3bQTv_ctx_t *ctx) {
    ctx->id = 5041;
    ctx->coefficient = 6.3;
    ctx->flags = 225;
}

int compute_mVn9D4E(int input) {
    int result = input * 15;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} Z0gGMBy6_ctx_t;

void init_ctx(Z0gGMBy6_ctx_t *ctx) {
    ctx->id = 7240;
    ctx->coefficient = 1.3;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} xyupvkFK_ctx_t;

void init_ctx(xyupvkFK_ctx_t *ctx) {
    ctx->id = 4005;
    ctx->coefficient = 7.5;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} HR8XChTF_ctx_t;

void init_ctx(HR8XChTF_ctx_t *ctx) {
    ctx->id = 4319;
    ctx->coefficient = 7.9;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} pKii1wQC_ctx_t;

void init_ctx(pKii1wQC_ctx_t *ctx) {
    ctx->id = 2847;
    ctx->coefficient = 9.7;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} QcIYtfwi_ctx_t;

void init_ctx(QcIYtfwi_ctx_t *ctx) {
    ctx->id = 7738;
    ctx->coefficient = 8.8;
    ctx->flags = 91;
}

int compute_O3mfH6U(int input) {
    int result = input * 2;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} GzjM9C2Z_ctx_t;

void init_ctx(GzjM9C2Z_ctx_t *ctx) {
    ctx->id = 5327;
    ctx->coefficient = 2.5;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} iEEOL9zh_ctx_t;

void init_ctx(iEEOL9zh_ctx_t *ctx) {
    ctx->id = 9048;
    ctx->coefficient = 5.1;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} oBptodeh_ctx_t;

void init_ctx(oBptodeh_ctx_t *ctx) {
    ctx->id = 7729;
    ctx->coefficient = 7.8;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} e1mmrRjn_ctx_t;

void init_ctx(e1mmrRjn_ctx_t *ctx) {
    ctx->id = 1552;
    ctx->coefficient = 8.5;
    ctx->flags = 50;
}

int compute_Jcz6mDK(int input) {
    int result = input * 65;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} u3WjRwnK_ctx_t;

void init_ctx(u3WjRwnK_ctx_t *ctx) {
    ctx->id = 4170;
    ctx->coefficient = 4.7;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} vEfNg6d3_ctx_t;

void init_ctx(vEfNg6d3_ctx_t *ctx) {
    ctx->id = 3779;
    ctx->coefficient = 7.2;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 3ZMBRvbB_ctx_t;

void init_ctx(3ZMBRvbB_ctx_t *ctx) {
    ctx->id = 9291;
    ctx->coefficient = 3.8;
    ctx->flags = 150;
}

int compute_9o81E5m(int input) {
    int result = input * 40;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} OHbRkT6d_ctx_t;

void init_ctx(OHbRkT6d_ctx_t *ctx) {
    ctx->id = 6900;
    ctx->coefficient = 5.1;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} S5sKZ8zp_ctx_t;

void init_ctx(S5sKZ8zp_ctx_t *ctx) {
    ctx->id = 5471;
    ctx->coefficient = 4.3;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} ZVuZnUZN_ctx_t;

void init_ctx(ZVuZnUZN_ctx_t *ctx) {
    ctx->id = 2697;
    ctx->coefficient = 1.4;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} bcVJA34C_ctx_t;

void init_ctx(bcVJA34C_ctx_t *ctx) {
    ctx->id = 9599;
    ctx->coefficient = 0.4;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 3t2vN75N_ctx_t;

void init_ctx(3t2vN75N_ctx_t *ctx) {
    ctx->id = 3335;
    ctx->coefficient = 8.1;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} ZGURa6RN_ctx_t;

void init_ctx(ZGURa6RN_ctx_t *ctx) {
    ctx->id = 5025;
    ctx->coefficient = 3.6;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} yQpoAeWp_ctx_t;

void init_ctx(yQpoAeWp_ctx_t *ctx) {
    ctx->id = 6426;
    ctx->coefficient = 6.8;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} BiQSNj7O_ctx_t;

void init_ctx(BiQSNj7O_ctx_t *ctx) {
    ctx->id = 6343;
    ctx->coefficient = 9.3;
    ctx->flags = 31;
}

int compute_BzBxOas(int input) {
    int result = input * 62;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} hCX7ofB0_ctx_t;

void init_ctx(hCX7ofB0_ctx_t *ctx) {
    ctx->id = 2267;
    ctx->coefficient = 3.4;
    ctx->flags = 92;
}

int compute_L548iEH(int input) {
    int result = input * 25;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_YTML8c2(int input) {
    int result = input * 47;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} PbkGetTu_ctx_t;

void init_ctx(PbkGetTu_ctx_t *ctx) {
    ctx->id = 5281;
    ctx->coefficient = 9.4;
    ctx->flags = 26;
}

int compute_gWJYvSc(int input) {
    int result = input * 36;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} BOda0FyD_ctx_t;

void init_ctx(BOda0FyD_ctx_t *ctx) {
    ctx->id = 7648;
    ctx->coefficient = 2.5;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} N9tk8bv7_ctx_t;

void init_ctx(N9tk8bv7_ctx_t *ctx) {
    ctx->id = 3629;
    ctx->coefficient = 2.3;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 3LGPQg3O_ctx_t;

void init_ctx(3LGPQg3O_ctx_t *ctx) {
    ctx->id = 8291;
    ctx->coefficient = 9.2;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 5E4LCG2j_ctx_t;

void init_ctx(5E4LCG2j_ctx_t *ctx) {
    ctx->id = 7252;
    ctx->coefficient = 9.4;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} xuwkPMrl_ctx_t;

void init_ctx(xuwkPMrl_ctx_t *ctx) {
    ctx->id = 2480;
    ctx->coefficient = 8.7;
    ctx->flags = 70;
}

int compute_xee0SSr(int input) {
    int result = input * 13;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} TtEOPths_ctx_t;

void init_ctx(TtEOPths_ctx_t *ctx) {
    ctx->id = 8844;
    ctx->coefficient = 6.8;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} YurgxoLK_ctx_t;

void init_ctx(YurgxoLK_ctx_t *ctx) {
    ctx->id = 2328;
    ctx->coefficient = 8.5;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} KWYAJKgq_ctx_t;

void init_ctx(KWYAJKgq_ctx_t *ctx) {
    ctx->id = 1405;
    ctx->coefficient = 9.0;
    ctx->flags = 33;
}

int compute_y471y7p(int input) {
    int result = input * 8;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} KrQwicUa_ctx_t;

void init_ctx(KrQwicUa_ctx_t *ctx) {
    ctx->id = 4835;
    ctx->coefficient = 10.0;
    ctx->flags = 247;
}

int compute_hLdWUWG(int input) {
    int result = input * 9;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_1yvGcqW(int input) {
    int result = input * 66;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} vpJGe60h_ctx_t;

void init_ctx(vpJGe60h_ctx_t *ctx) {
    ctx->id = 4300;
    ctx->coefficient = 9.5;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} o9LLYETW_ctx_t;

void init_ctx(o9LLYETW_ctx_t *ctx) {
    ctx->id = 3173;
    ctx->coefficient = 9.7;
    ctx->flags = 156;
}

int compute_P38d87f(int input) {
    int result = input * 29;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 13925r7u_ctx_t;

void init_ctx(13925r7u_ctx_t *ctx) {
    ctx->id = 1803;
    ctx->coefficient = 7.2;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 2OOl5hFC_ctx_t;

void init_ctx(2OOl5hFC_ctx_t *ctx) {
    ctx->id = 3789;
    ctx->coefficient = 8.5;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} bycDfZfY_ctx_t;

void init_ctx(bycDfZfY_ctx_t *ctx) {
    ctx->id = 7416;
    ctx->coefficient = 8.7;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} zzDmysFP_ctx_t;

void init_ctx(zzDmysFP_ctx_t *ctx) {
    ctx->id = 9979;
    ctx->coefficient = 9.7;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} kLMzXHMb_ctx_t;

void init_ctx(kLMzXHMb_ctx_t *ctx) {
    ctx->id = 4069;
    ctx->coefficient = 1.6;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} TQ97WeDz_ctx_t;

void init_ctx(TQ97WeDz_ctx_t *ctx) {
    ctx->id = 9628;
    ctx->coefficient = 2.6;
    ctx->flags = 86;
}

int compute_N81OOGL(int input) {
    int result = input * 62;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} JY0LP4Cj_ctx_t;

void init_ctx(JY0LP4Cj_ctx_t *ctx) {
    ctx->id = 3752;
    ctx->coefficient = 7.5;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} zfnKDywk_ctx_t;

void init_ctx(zfnKDywk_ctx_t *ctx) {
    ctx->id = 6981;
    ctx->coefficient = 9.3;
    ctx->flags = 47;
}

int compute_GLT4BCa(int input) {
    int result = input * 12;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} asuE8ZO3_ctx_t;

void init_ctx(asuE8ZO3_ctx_t *ctx) {
    ctx->id = 9859;
    ctx->coefficient = 1.6;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} rc4oUAee_ctx_t;

void init_ctx(rc4oUAee_ctx_t *ctx) {
    ctx->id = 5294;
    ctx->coefficient = 2.8;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} oRV6ChlR_ctx_t;

void init_ctx(oRV6ChlR_ctx_t *ctx) {
    ctx->id = 8233;
    ctx->coefficient = 0.6;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} KPMdwh4P_ctx_t;

void init_ctx(KPMdwh4P_ctx_t *ctx) {
    ctx->id = 9606;
    ctx->coefficient = 8.1;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} Ju6AP1Lr_ctx_t;

void init_ctx(Ju6AP1Lr_ctx_t *ctx) {
    ctx->id = 9064;
    ctx->coefficient = 4.9;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 6Nfja52T_ctx_t;

void init_ctx(6Nfja52T_ctx_t *ctx) {
    ctx->id = 5713;
    ctx->coefficient = 6.6;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 026SaMN5_ctx_t;

void init_ctx(026SaMN5_ctx_t *ctx) {
    ctx->id = 7731;
    ctx->coefficient = 2.4;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} q7BA1oEF_ctx_t;

void init_ctx(q7BA1oEF_ctx_t *ctx) {
    ctx->id = 7993;
    ctx->coefficient = 9.4;
    ctx->flags = 133;
}

int compute_obI4SzE(int input) {
    int result = input * 53;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} SLRa04Vs_ctx_t;

void init_ctx(SLRa04Vs_ctx_t *ctx) {
    ctx->id = 3207;
    ctx->coefficient = 9.2;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} cruLV7LP_ctx_t;

void init_ctx(cruLV7LP_ctx_t *ctx) {
    ctx->id = 2664;
    ctx->coefficient = 10.0;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} lRthHeUe_ctx_t;

void init_ctx(lRthHeUe_ctx_t *ctx) {
    ctx->id = 9259;
    ctx->coefficient = 0.4;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} G9JPeGe6_ctx_t;

void init_ctx(G9JPeGe6_ctx_t *ctx) {
    ctx->id = 6607;
    ctx->coefficient = 0.4;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} MVyQ8wqf_ctx_t;

void init_ctx(MVyQ8wqf_ctx_t *ctx) {
    ctx->id = 1877;
    ctx->coefficient = 3.8;
    ctx->flags = 228;
}

int compute_zPs9pSB(int input) {
    int result = input * 8;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_IVq0oOn(int input) {
    int result = input * 14;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} zOT0n4Nc_ctx_t;

void init_ctx(zOT0n4Nc_ctx_t *ctx) {
    ctx->id = 1504;
    ctx->coefficient = 6.2;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} KeDXvOkB_ctx_t;

void init_ctx(KeDXvOkB_ctx_t *ctx) {
    ctx->id = 9963;
    ctx->coefficient = 6.4;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 6fyPCSZQ_ctx_t;

void init_ctx(6fyPCSZQ_ctx_t *ctx) {
    ctx->id = 9929;
    ctx->coefficient = 6.9;
    ctx->flags = 158;
}

int compute_hI3c9Dn(int input) {
    int result = input * 46;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} Fk1jonGn_ctx_t;

void init_ctx(Fk1jonGn_ctx_t *ctx) {
    ctx->id = 9861;
    ctx->coefficient = 4.0;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 9j7kWOxx_ctx_t;

void init_ctx(9j7kWOxx_ctx_t *ctx) {
    ctx->id = 6000;
    ctx->coefficient = 6.5;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} okQjUHRO_ctx_t;

void init_ctx(okQjUHRO_ctx_t *ctx) {
    ctx->id = 2586;
    ctx->coefficient = 4.9;
    ctx->flags = 125;
}

int compute_Ow95UIe(int input) {
    int result = input * 41;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} FuGRdufJ_ctx_t;

void init_ctx(FuGRdufJ_ctx_t *ctx) {
    ctx->id = 4813;
    ctx->coefficient = 3.0;
    ctx->flags = 60;
}

int compute_Sqdc1ou(int input) {
    int result = input * 2;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} PuoBaoiX_ctx_t;

void init_ctx(PuoBaoiX_ctx_t *ctx) {
    ctx->id = 8843;
    ctx->coefficient = 6.3;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} NHPzBt0t_ctx_t;

void init_ctx(NHPzBt0t_ctx_t *ctx) {
    ctx->id = 8870;
    ctx->coefficient = 3.4;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} U5tY2H55_ctx_t;

void init_ctx(U5tY2H55_ctx_t *ctx) {
    ctx->id = 2551;
    ctx->coefficient = 8.0;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} r0dVyLj0_ctx_t;

void init_ctx(r0dVyLj0_ctx_t *ctx) {
    ctx->id = 6095;
    ctx->coefficient = 4.2;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} HCcYa8fJ_ctx_t;

void init_ctx(HCcYa8fJ_ctx_t *ctx) {
    ctx->id = 2153;
    ctx->coefficient = 1.6;
    ctx->flags = 117;
}

int compute_sHjwkti(int input) {
    int result = input * 5;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} MrXMS48i_ctx_t;

void init_ctx(MrXMS48i_ctx_t *ctx) {
    ctx->id = 2024;
    ctx->coefficient = 2.2;
    ctx->flags = 24;
}

int compute_1Lby7Zs(int input) {
    int result = input * 31;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} MOdxDCON_ctx_t;

void init_ctx(MOdxDCON_ctx_t *ctx) {
    ctx->id = 1030;
    ctx->coefficient = 3.0;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Pz2TSNkR_ctx_t;

void init_ctx(Pz2TSNkR_ctx_t *ctx) {
    ctx->id = 5257;
    ctx->coefficient = 7.5;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} xHp13Ttt_ctx_t;

void init_ctx(xHp13Ttt_ctx_t *ctx) {
    ctx->id = 9295;
    ctx->coefficient = 6.3;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} ZxfHeNbR_ctx_t;

void init_ctx(ZxfHeNbR_ctx_t *ctx) {
    ctx->id = 5788;
    ctx->coefficient = 4.0;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} eKJqp187_ctx_t;

void init_ctx(eKJqp187_ctx_t *ctx) {
    ctx->id = 1609;
    ctx->coefficient = 6.1;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} AZIIU5vm_ctx_t;

void init_ctx(AZIIU5vm_ctx_t *ctx) {
    ctx->id = 8441;
    ctx->coefficient = 6.0;
    ctx->flags = 2;
}

int compute_6WZ2MsH(int input) {
    int result = input * 17;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} px6QuIZK_ctx_t;

void init_ctx(px6QuIZK_ctx_t *ctx) {
    ctx->id = 8642;
    ctx->coefficient = 7.0;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 1irFwycu_ctx_t;

void init_ctx(1irFwycu_ctx_t *ctx) {
    ctx->id = 7940;
    ctx->coefficient = 1.0;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} QGuxq1yS_ctx_t;

void init_ctx(QGuxq1yS_ctx_t *ctx) {
    ctx->id = 8994;
    ctx->coefficient = 6.7;
    ctx->flags = 13;
}

int compute_SguQJtw(int input) {
    int result = input * 12;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} pQsdzA8i_ctx_t;

void init_ctx(pQsdzA8i_ctx_t *ctx) {
    ctx->id = 3336;
    ctx->coefficient = 3.5;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} cBXpzfR3_ctx_t;

void init_ctx(cBXpzfR3_ctx_t *ctx) {
    ctx->id = 2491;
    ctx->coefficient = 1.1;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 4njeH97T_ctx_t;

void init_ctx(4njeH97T_ctx_t *ctx) {
    ctx->id = 1126;
    ctx->coefficient = 4.0;
    ctx->flags = 228;
}

int compute_9DaBbRj(int input) {
    int result = input * 64;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_05N9FfJ(int input) {
    int result = input * 66;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_NZdKxgm(int input) {
    int result = input * 45;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} uKJls0IL_ctx_t;

void init_ctx(uKJls0IL_ctx_t *ctx) {
    ctx->id = 4269;
    ctx->coefficient = 5.2;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} gkgDLxmr_ctx_t;

void init_ctx(gkgDLxmr_ctx_t *ctx) {
    ctx->id = 3852;
    ctx->coefficient = 5.4;
    ctx->flags = 69;
}

int compute_NsBN4W7(int input) {
    int result = input * 69;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} fiipUGtZ_ctx_t;

void init_ctx(fiipUGtZ_ctx_t *ctx) {
    ctx->id = 1082;
    ctx->coefficient = 3.9;
    ctx->flags = 133;
}

