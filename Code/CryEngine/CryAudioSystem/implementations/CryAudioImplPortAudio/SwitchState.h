// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

#include <ATLEntityData.h>

namespace CryAudio
{
namespace Impl
{
namespace PortAudio
{
class CSwitchState final : public ISwitchState
{
public:

	CSwitchState(CSwitchState const&) = delete;
	CSwitchState(CSwitchState&&) = delete;
	CSwitchState& operator=(CSwitchState const&) = delete;
	CSwitchState& operator=(CSwitchState&&) = delete;

	CSwitchState() = default;
	virtual ~CSwitchState() override = default;
};
} // namespace PortAudio
} // namespace Impl
} // namespace CryAudio