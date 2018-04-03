// Copyright 2001-2016 Crytek GmbH. All rights reserved.
#pragma once

#include "AssetSystem/AssetType.h"

class CEditableAsset;

//PFX assets
class CParticlesType : public CAssetType
{
private:
	struct SCreateParams;

public:
	DECLARE_ASSET_TYPE_DESC(CParticlesType);

	bool                  CreateForExistingEffect(const char* szFilePath) const;

	virtual const char*   GetTypeName() const override        { return "Particles"; }
	virtual const char*   GetUiTypeName() const override      { return QT_TR_NOOP("Particles"); }
	virtual const char*   GetFileExtension() const override   { return "pfx"; }
	virtual bool          CanBeCreated() const override       { return true; }
	virtual bool          IsImported() const override         { return false; }
	virtual bool          CanBeEdited() const override        { return true; }
	virtual const char*   GetObjectClassName() const override { return "EntityWithParticleComponent"; }
	virtual QColor        GetThumbnailColor() const override  { return QColor(207, 128, 80); }

	virtual CAssetEditor* Edit(CAsset* asset) const override;

	//Particle needs to support legacy editor still
	virtual bool IsUsingGenericPropertyTreePicker() const override { return false; }

protected:
	virtual bool OnCreate(CEditableAsset& editAsset, const void* pTypeSpecificParameter) const override;

private:
	virtual CryIcon GetIconInternal() const override;
};

