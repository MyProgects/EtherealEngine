#pragma once
#include "frame_buffer.h"
#include "core/common/basetypes.hpp"
#include "core/math/math_includes.h"
#include <vector>
#include <unordered_map>
#include <string>

struct RenderPass
{
	//-----------------------------------------------------------------------------
	//  Name : RenderPass ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	RenderPass(const std::string& n);

	//-----------------------------------------------------------------------------
	//  Name : bind ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	void bind(FrameBuffer* fb) const;

	//-----------------------------------------------------------------------------
	//  Name : clear ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	void clear(std::uint16_t _flags
		, std::uint32_t _rgba = 0x000000ff
		, float _depth = 1.0f
		, std::uint8_t _stencil = 0) const;

	//-----------------------------------------------------------------------------
	//  Name : clear ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	void clear() const;

	//-----------------------------------------------------------------------------
	//  Name : set_view_proj ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	void set_view_proj(const math::transform_t& v, const math::transform_t& p);
	void set_view_proj_ortho_full(float depth);
	//-----------------------------------------------------------------------------
	//  Name : reset ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	static void reset();

	//-----------------------------------------------------------------------------
	//  Name : get_pass ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	static std::uint8_t get_pass();

	///
	std::uint8_t id;
};