// [Typelib �N���X�ǉ��E�B�U�[�h] �ō쐬���ꂽ IDispatch ���b�p�[ �N���X�𐶐����܂����B

#import "C:\\PROGRA~1\\MIF5BA~1\\Office15\\GENKO.DLL" no_namespace
// CCallbacks ���b�p�[ �N���X

class CCallbacks : public COleDispatchDriver
{
public:
	CCallbacks(){} // COleDispatchDriver ����̃R���X�g���N�^�[���Ăяo���܂��B
	CCallbacks(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCallbacks(const CCallbacks& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// ICallbacks ���\�b�h
public:
	CString GetLabel(LPUNKNOWN pControl)
	{
		CString result;
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, pControl);
		return result;
	}
	LPDISPATCH GetImage(LPUNKNOWN pControl)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, pControl);
		return result;
	}
	BOOL GetEnabled(LPUNKNOWN pControl)
	{
		BOOL result;
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pControl);
		return result;
	}
	BOOL GetPressed(LPUNKNOWN pControl)
	{
		BOOL result;
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pControl);
		return result;
	}
	void OnAction(LPUNKNOWN pControl)
	{
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pControl);
	}
	void OnCustomUILoaded(LPUNKNOWN pRibbonUI)
	{
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pRibbonUI);
	}
	BOOL GetVisible(LPUNKNOWN pControl)
	{
		BOOL result;
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pControl);
		return result;
	}

	// ICallbacks �v���p�e�B
public:

};
