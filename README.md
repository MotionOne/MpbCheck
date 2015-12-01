# MpbCheck

### 목적
- IE에서 FujiPBook이 설치되어 있는지 유무를 객체생성이 성공하는지 여부로 판단함.

### 등록 정보
- CLSID : 9CE7C297-9C22-4E9C-A933-78D3210DDFA8
- ProgID : FujiPBook.MpbCheck

### Object 생성방법
var obj = new ActiveXObject('FujiPBook.MpbCheck');

### Registry
- 관리자 권한으로 명령 프롬프트를 실행하여 regsvr32를 실행하여 등록한다.
- HKCU\Software\Classes\FujiPBook.MpbCheck 
- HKCU\Software\Classes\FujiPBook.MpbCheck.1
- HKCR\FujiPBook.MpbCheck  (HKCU의 view)
- HKCR\FujiPBook.MpbCheck.1 (HKCU의 view)

###Per User로 등록하기 위한 작업
- MpbCheck.cpp의 DllRegisterServer()및 DllUnregisterServer()에 다음 추가
- ATL::AtlSetPerUserRegistration(true);
