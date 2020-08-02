#pragma once

namespace Offsets {
	namespace Methods {
		namespace Controll {
			inline std::uintptr_t SetLockAttack = Memory::MAKE_RVA(0x6AD070);
			inline std::uintptr_t SetLockAngle = Memory::MAKE_RVA(0x6AD0D0);
		}

		namespace Crosshair {
			inline std::uintptr_t SetCursor = Memory::MAKE_RVA(0x6BAE30);
		}

		namespace Client {
			inline std::uintptr_t IsConnected = Memory::MAKE_RVA(0x606AC0);
		}

		namespace GUIM {
			inline std::uintptr_t YRES = Memory::MAKE_RVA(0x778350);
			inline std::uintptr_t DrawBox = Memory::MAKE_RVA(0x774F10);
			inline std::uintptr_t DrawBoxBorder = Memory::MAKE_RVA(0x774BC0);
			inline std::uintptr_t DrawTextColor = Memory::MAKE_RVA(0x776190);
		}

		namespace Input {
			inline std::string GetKey = "UnityEngine.Input::GetKeyInt(UnityEngine.KeyCode)";
		}

		namespace Object {
			inline std::string GetName = "UnityEngine.Object::GetName(UnityEngine.Object)";
		}

		namespace Texture {
			inline std::uintptr_t GenerateTexture = Memory::MAKE_RVA(0x662F60);
			inline std::uintptr_t SetPixel = Memory::MAKE_RVA(0x3E40D0);
			inline std::uintptr_t Apply = Memory::MAKE_RVA(0x3E3600);
		}

		namespace Screen {
			inline std::string GetWidth = "UnityEngine.Screen::get_width()";
			inline std::string GetHeight = "UnityEngine.Screen::get_height()";
		}

		namespace Camera {
			inline std::string WorldToScreen = "UnityEngine.Camera::WorldToScreenPoint_Injected(UnityEngine.Vector3&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Vector3&)";
			inline std::string FieldOfView = "UnityEngine.Camera::get_fieldOfView()";
			inline std::string SetFieldOfView = "UnityEngine.Camera::set_fieldOfView(System.Single)";
			inline std::string ProjectionMatrix = "UnityEngine.Camera::get_projectionMatrix_Injected(UnityEngine.Matrix4x4&)";
		}

		namespace Physics {
			inline std::uintptr_t Linecast = Memory::MAKE_RVA(0x5CB740);
		}

		namespace Transform {
			inline std::string GetPosition = "UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)";
			inline std::string GetLocalScale = "UnityEngine.Transform::get_localScale_Injected(UnityEngine.Vector3&)";

			inline std::uintptr_t GetRight = Memory::MAKE_RVA(0x59B020);
			inline std::uintptr_t GetUp = Memory::MAKE_RVA(0x59B220);
			inline std::uintptr_t GetForward = Memory::MAKE_RVA(0x59A9C0);
		}

		namespace GameObject {
			inline std::string GetTransform = "UnityEngine.GameObject::get_transform()";
		}
	}

	namespace Hooks {
		inline LPVOID Update = Memory::MAKE_RVA_PTR<VOID>(0x6B7BB0);
		inline LPVOID GUI = Memory::MAKE_RVA_PTR<VOID>(0x6A87E0);
		inline LPVOID GetKeyUp = Memory::MAKE_RVA_PTR<VOID>(0x34B9B0);
		inline LPVOID Raycast = Memory::MAKE_RVA_PTR<VOID>(0x6AB470);
	}
}