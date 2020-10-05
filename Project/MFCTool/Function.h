#pragma once


// Release ����� �����ϴ� ���̽� Ŭ������ ã�Եȴٸ� Ÿ�� �˻��ϴ� �ڵ带 �߰��Ұ�
template<typename DX_Release_EnableType>
uint32_t DXRelease(DX_Release_EnableType& Instance)
{
	// static_assert (std::is_base_of<DirectXReleaseBaseClass , DX_Release_EnableType >::type, L"");

	uint32_t RefCnt = 0; 

	if (Instance)
	{
		RefCnt = Instance->Release();
		Instance = nullptr;
	}

	return RefCnt;
}

template<typename T>
void SAFE_DELETE(T& Instance)
{
	static_assert(std::is_pointer<T>::value, __FUNCTION__);

	if (Instance)
	{
		delete Instance; 
		Instance = nullptr; 
	}
}