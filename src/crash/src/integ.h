#ifndef INTEG_H
#define INTEG_H

void crashSystemDraw();
entry *crashSystemPage(unsigned long EID);
unsigned long crashSystemControl();
unsigned long crashSystemTime();
void crashSystemZoneWorldModels();
void crashSystemObjectModel(entry *svtx, unsigned long frame,
                           cvector *trans, cangle *rot, cvector *scale,
                           cslightmatrix *light, cscolormatrix *color, cscolor *back, cscolor *backIntensity);
void crashSystemSpriteModel(unsigned long texEID, unsigned char *texInfoArray, unsigned long scale, cvector *trans);
void crashSystemFragmentModel(unsigned long texEID, unsigned long quadCount, csquad *quads,
                              unsigned char *texInfoArray, unsigned long scale, cvector *trans);
void crashSystemViewMatrix();
void crashSystemCameraUpdate();
void crashSystemHandleObjects();

#endif