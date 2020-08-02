#pragma once

namespace UnityEngine {
	class Rect {
	public:
		float XMin, YMin, Width, Height;
	};

	class Color {
	public:
		float r, g, b, a;
	};

	class RaycastHit {
	public:
		Vector3 Point, Normal;
		std::uint32_t FaceID;
		float Distance;
		Vector2 UV;
		std::int32_t Collider;
	};

	/*class Matrix4x4 {
	public:
		float m00, m10, m20, m30;
		float m01, m11, m21, m31;
		float m02, m12, m22, m32;
		float m03, m13, m23, m33;
	};*/

	template<typename T> inline T CALL_UNITY_METHOD(std::string method_name) {
		return reinterpret_cast<T>(reinterpret_cast<LPVOID(CDECL*)(const char*)>(GetProcAddress(static_cast<HMODULE>(GameAssembly), "il2cpp_resolve_icall"))(method_name.c_str()));
	}

	class Controll {
	public:
		static void SetLockAttack(bool value) {
			return Memory::FUNCTION_CAST<void, bool>(Offsets::Methods::Controll::SetLockAttack, value);
		}

		static void SetLockAngle(bool value) {
			return Memory::FUNCTION_CAST<void, bool>(Offsets::Methods::Controll::SetLockAngle, value);
		}
	};

	class Crosshair {
	public:
		static void SetCursor(bool value) {
			return Memory::FUNCTION_CAST<void, bool>(Offsets::Methods::Crosshair::SetCursor, value);
		}
	};

	class Client {
	public:
		static bool IsConnected() {
			return Memory::FUNCTION_CAST<bool>(Offsets::Methods::Client::IsConnected);
		}
	};

	class Texture;

	class GUIM {
	public:
		static float YRES(float value) {
			return Memory::FUNCTION_CAST<float>(Offsets::Methods::GUIM::YRES, value);
		}

		static void DrawBox(Rect rect, std::add_pointer_t<Texture> texture) {
			return Memory::FUNCTION_CAST<void, Rect, std::add_pointer_t<Texture>>(Offsets::Methods::GUIM::DrawBox, rect, texture);
		}

		static void DrawBoxBorder(Rect rect, std::add_pointer_t<Texture> texture, float alpha) {
			return Memory::FUNCTION_CAST<void, Rect, std::add_pointer_t<Texture>, float>(Offsets::Methods::GUIM::DrawBoxBorder, rect, texture, alpha);
		}

		static void DrawTextColor(Rect rect, std::add_pointer_t<SystemString> text, std::int32_t pos, std::int32_t fontcolor, std::int32_t fontpos, std::int32_t fontsize, bool fontshadow) {
			return Memory::FUNCTION_CAST<void, Rect, std::add_pointer_t<SystemString>, std::int32_t, std::int32_t, std::int32_t, std::int32_t, bool>(Offsets::Methods::GUIM::DrawTextColor, rect, text, pos, fontcolor, fontpos, fontsize, fontshadow);
		}
	};

	class Input {
	public:
		static bool GetKey(Enums::KeyCode key) {
			return Memory::FUNCTION_CAST<bool, Enums::KeyCode>(CALL_UNITY_METHOD<std::uintptr_t>(Offsets::Methods::Input::GetKey), key);
		}
	};

	class Object {
	public:
		static std::add_pointer_t<SystemString> GetName(std::add_pointer_t<Object> instance) {
			return Memory::FUNCTION_CAST<std::add_pointer_t<SystemString>, std::add_pointer_t<Object>>(CALL_UNITY_METHOD<std::uintptr_t>(Offsets::Methods::Object::GetName), instance);
		}
	};

	class Texture {
	public:
		static std::add_pointer_t<Texture> GenerateTexture(Color color, std::add_pointer_t<SystemString> name) {
			return Memory::FUNCTION_CAST<std::add_pointer_t<Texture>, Color, std::add_pointer_t<SystemString>>(Offsets::Methods::Texture::GenerateTexture, color, name);
		}

		static void SetPixel(std::add_pointer_t<Texture> instance, std::int32_t x, std::int32_t y, Color color) {
			return Memory::FUNCTION_CAST<void, std::add_pointer_t<Texture>, int32_t, int32_t, Color>(Offsets::Methods::Texture::SetPixel, instance, x, y, color);
		}

		static void Apply(std::add_pointer_t<Texture> instance, bool UpdateMipmaps) {
			return Memory::FUNCTION_CAST<void, std::add_pointer_t<Texture>, bool>(Offsets::Methods::Texture::Apply, instance, UpdateMipmaps);
		}
	};

	class Screen {
	public:
		static Resolution GetResolution() {
			return { Memory::FUNCTION_CAST<std::int32_t>(CALL_UNITY_METHOD<std::uintptr_t>(Offsets::Methods::Screen::GetWidth)),
				Memory::FUNCTION_CAST<std::int32_t>(CALL_UNITY_METHOD<std::uintptr_t>(Offsets::Methods::Screen::GetHeight)) };
		}
	};

	class Camera {
	public:
		static void WorldToScreen(std::add_pointer_t<Camera> instance, std::add_pointer_t<Vector3> position, std::int32_t MonoOrStereoscopicEye, std::add_pointer_t<Vector3> result) {
			return Memory::FUNCTION_CAST<void, std::add_pointer_t<Camera>, std::add_pointer_t<Vector3>, std::int32_t, std::add_pointer_t<Vector3>>(CALL_UNITY_METHOD<std::uintptr_t>(Offsets::Methods::Camera::WorldToScreen), instance, position, MonoOrStereoscopicEye, result);
		}

		static float FieldOfView(std::add_pointer_t<Camera> instance) {
			return Memory::FUNCTION_CAST<float, std::add_pointer_t<Camera>>(CALL_UNITY_METHOD<std::uintptr_t>(Offsets::Methods::Camera::FieldOfView), instance);
		}

		static void SetFieldOfView(std::add_pointer_t<Camera> instance, float value) {
			return Memory::FUNCTION_CAST<void, std::add_pointer_t<Camera>, float>(CALL_UNITY_METHOD<std::uintptr_t>(Offsets::Methods::Camera::SetFieldOfView), instance, value);
		}
	};

	class Physics {
	public:
		static bool Linecast(Vector3 start, Vector3 end, std::add_pointer_t<RaycastHit> hit_info) {
			return Memory::FUNCTION_CAST<bool, Vector3, Vector3, std::add_pointer_t<RaycastHit>>(Offsets::Methods::Physics::Linecast, start, end, hit_info);
		}
	};

	class Transform {
	public:
		static void GetPosition(std::add_pointer_t<Transform> instance, std::add_pointer_t<Vector3> result) {
			return Memory::FUNCTION_CAST<void, std::add_pointer_t<Transform>, std::add_pointer_t<Vector3>>(CALL_UNITY_METHOD<std::uintptr_t>(Offsets::Methods::Transform::GetPosition), instance, result);
		}

		static Vector3 GetRight(std::add_pointer_t<Transform> instance) {
			return Memory::FUNCTION_CAST<Vector3, std::add_pointer_t<Transform>>(Offsets::Methods::Transform::GetRight, instance);
		}

		static Vector3 GetUp(std::add_pointer_t<Transform> instance) {
			return Memory::FUNCTION_CAST<Vector3, std::add_pointer_t<Transform>>(Offsets::Methods::Transform::GetUp, instance);
		}

		static Vector3 GetForward(std::add_pointer_t<Transform> instance) {
			return Memory::FUNCTION_CAST<Vector3, std::add_pointer_t<Transform>>(Offsets::Methods::Transform::GetForward, instance);
		}

		static void GetLocalScale(std::add_pointer_t<Transform> instance, std::add_pointer_t<Vector3> result) {
			return Memory::FUNCTION_CAST<void, std::add_pointer_t<Transform>, std::add_pointer_t<Vector3>>(CALL_UNITY_METHOD<std::uintptr_t>(Offsets::Methods::Transform::GetLocalScale), instance, result);
		}
	};

	class GameObject {
	public:
		static std::add_pointer_t<Transform> GetTransform(std::add_pointer_t<GameObject> instance) {
			return Memory::FUNCTION_CAST<std::add_pointer_t<Transform>, std::add_pointer_t<GameObject>>(CALL_UNITY_METHOD<std::uintptr_t>(Offsets::Methods::GameObject::GetTransform), instance);
		}
	};
}