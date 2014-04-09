// [Typelib クラス追加ウィザード] で作成された IDispatch ラッパー クラスを生成しました。

#import "C:\\PROGRA~1\\MIF5BA~1\\Office15\\GENKO.DLL" no_namespace
// CCallbacks ラッパー クラス

class CCallbacks : public COleDispatchDriver
{
public:
	CCallbacks(){} // COleDispatchDriver 既定のコンストラクターを呼び出します。
	CCallbacks(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCallbacks(const CCallbacks& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 属性
public:

	// 操作
public:


	// ICallbacks メソッド
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

	// ICallbacks プロパティ
public:

};
