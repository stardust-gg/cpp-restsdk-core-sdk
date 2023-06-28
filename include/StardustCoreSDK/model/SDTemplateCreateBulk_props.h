/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-06-15T19:52:41Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SDTemplateCreateBulk_props.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_MODEL_SDTemplateCreateBulk_props_H_
#define GG_STARDUST_CORESDK_MODEL_SDTemplateCreateBulk_props_H_


#include "StardustCoreSDK/ModelBase.h"

#include "StardustCoreSDK/Object.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {


/// <summary>
/// 
/// </summary>
class  SDTemplateCreateBulk_props
    : public ModelBase
{
public:
    SDTemplateCreateBulk_props();
    virtual ~SDTemplateCreateBulk_props();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SDTemplateCreateBulk_props members

    /// <summary>
    /// Properties for immutable on the Template
    /// </summary>
    std::shared_ptr<Object> getImmutable() const;
    bool immutableIsSet() const;
    void unsetImmutable();

    void setImmutable(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Properties for mutable on the Template
    /// </summary>
    std::shared_ptr<Object> getRMutable() const;
    bool rMutableIsSet() const;
    void unsetr_mutable();

    void setRMutable(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Properties for mutable on the Item
    /// </summary>
    std::shared_ptr<Object> getMutable() const;
    bool r_mutableIsSet() const;
    void unsetmutable();

    void setMutable(const std::shared_ptr<Object>& value);


protected:
    std::shared_ptr<Object> m_Immutable;
    bool m_ImmutableIsSet;
    std::shared_ptr<Object> m_r_mutable;
    bool m_r_mutableIsSet;
    std::shared_ptr<Object> m_mutable;
    bool m_mutableIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_SDTemplateCreateBulk_props_H_ */