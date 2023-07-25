/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-07-25T00:59:12Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "StardustCoreSDK/model/SDTokenGetResponse.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDTokenGetResponse::SDTokenGetResponse()
{
    m_GameId = 0;
    m_GameIdIsSet = false;
    m_TemplateId = 0;
    m_TemplateIdIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Flags = 0;
    m_FlagsIsSet = false;
    m_PropsIsSet = false;
    m_Owner = utility::conversions::to_string_t("");
    m_OwnerIsSet = false;
    m_PublicMetadataIsSet = false;
    m_BlockchainTokenId = utility::conversions::to_string_t("");
    m_BlockchainTokenIdIsSet = false;
    m_BlockchainExplorerLink = utility::conversions::to_string_t("");
    m_BlockchainExplorerLinkIsSet = false;
}

SDTokenGetResponse::~SDTokenGetResponse()
{
}

void SDTokenGetResponse::validate()
{
    // TODO: implement validation
}

web::json::value SDTokenGetResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_GameIdIsSet)
    {
        val[utility::conversions::to_string_t(U("gameId"))] = ModelBase::toJson(m_GameId);
    }
    if(m_TemplateIdIsSet)
    {
        val[utility::conversions::to_string_t(U("templateId"))] = ModelBase::toJson(m_TemplateId);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_FlagsIsSet)
    {
        val[utility::conversions::to_string_t(U("flags"))] = ModelBase::toJson(m_Flags);
    }
    if(m_PropsIsSet)
    {
        val[utility::conversions::to_string_t(U("props"))] = ModelBase::toJson(m_Props);
    }
    if(m_OwnerIsSet)
    {
        val[utility::conversions::to_string_t(U("owner"))] = ModelBase::toJson(m_Owner);
    }
    if(m_PublicMetadataIsSet)
    {
        val[utility::conversions::to_string_t(U("publicMetadata"))] = ModelBase::toJson(m_PublicMetadata);
    }
    if(m_BlockchainTokenIdIsSet)
    {
        val[utility::conversions::to_string_t(U("blockchainTokenId"))] = ModelBase::toJson(m_BlockchainTokenId);
    }
    if(m_BlockchainExplorerLinkIsSet)
    {
        val[utility::conversions::to_string_t(U("blockchainExplorerLink"))] = ModelBase::toJson(m_BlockchainExplorerLink);
    }

    return val;
}

bool SDTokenGetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("gameId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("gameId")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setGameId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGameId);
            setGameId(refVal_setGameId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("templateId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("templateId")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTemplateId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTemplateId);
            setTemplateId(refVal_setTemplateId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("flags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("flags")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setFlags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFlags);
            setFlags(refVal_setFlags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("props"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("props")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SDPlayerGetInventoryResponse_props> refVal_setProps;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProps);
            setProps(refVal_setProps);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("owner"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("owner")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOwner;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOwner);
            setOwner(refVal_setOwner);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("publicMetadata"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("publicMetadata")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setPublicMetadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPublicMetadata);
            setPublicMetadata(refVal_setPublicMetadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("blockchainTokenId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("blockchainTokenId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBlockchainTokenId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBlockchainTokenId);
            setBlockchainTokenId(refVal_setBlockchainTokenId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("blockchainExplorerLink"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("blockchainExplorerLink")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBlockchainExplorerLink;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBlockchainExplorerLink);
            setBlockchainExplorerLink(refVal_setBlockchainExplorerLink);
        }
    }
    return ok;
}

void SDTokenGetResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_GameIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("gameId")), m_GameId));
    }
    if(m_TemplateIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("templateId")), m_TemplateId));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_FlagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("flags")), m_Flags));
    }
    if(m_PropsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("props")), m_Props));
    }
    if(m_OwnerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("owner")), m_Owner));
    }
    if(m_PublicMetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("publicMetadata")), m_PublicMetadata));
    }
    if(m_BlockchainTokenIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("blockchainTokenId")), m_BlockchainTokenId));
    }
    if(m_BlockchainExplorerLinkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("blockchainExplorerLink")), m_BlockchainExplorerLink));
    }
}

bool SDTokenGetResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("gameId"))))
    {
        int32_t refVal_setGameId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("gameId"))), refVal_setGameId );
        setGameId(refVal_setGameId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("templateId"))))
    {
        int32_t refVal_setTemplateId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("templateId"))), refVal_setTemplateId );
        setTemplateId(refVal_setTemplateId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        int32_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("flags"))))
    {
        int32_t refVal_setFlags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("flags"))), refVal_setFlags );
        setFlags(refVal_setFlags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("props"))))
    {
        std::shared_ptr<SDPlayerGetInventoryResponse_props> refVal_setProps;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("props"))), refVal_setProps );
        setProps(refVal_setProps);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("owner"))))
    {
        utility::string_t refVal_setOwner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("owner"))), refVal_setOwner );
        setOwner(refVal_setOwner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("publicMetadata"))))
    {
        std::shared_ptr<Object> refVal_setPublicMetadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("publicMetadata"))), refVal_setPublicMetadata );
        setPublicMetadata(refVal_setPublicMetadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("blockchainTokenId"))))
    {
        utility::string_t refVal_setBlockchainTokenId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("blockchainTokenId"))), refVal_setBlockchainTokenId );
        setBlockchainTokenId(refVal_setBlockchainTokenId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("blockchainExplorerLink"))))
    {
        utility::string_t refVal_setBlockchainExplorerLink;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("blockchainExplorerLink"))), refVal_setBlockchainExplorerLink );
        setBlockchainExplorerLink(refVal_setBlockchainExplorerLink);
    }
    return ok;
}

int32_t SDTokenGetResponse::getGameId() const
{
    return m_GameId;
}

void SDTokenGetResponse::setGameId(int32_t value)
{
    m_GameId = value;
    m_GameIdIsSet = true;
}

bool SDTokenGetResponse::gameIdIsSet() const
{
    return m_GameIdIsSet;
}

void SDTokenGetResponse::unsetGameId()
{
    m_GameIdIsSet = false;
}
int32_t SDTokenGetResponse::getTemplateId() const
{
    return m_TemplateId;
}

void SDTokenGetResponse::setTemplateId(int32_t value)
{
    m_TemplateId = value;
    m_TemplateIdIsSet = true;
}

bool SDTokenGetResponse::templateIdIsSet() const
{
    return m_TemplateIdIsSet;
}

void SDTokenGetResponse::unsetTemplateId()
{
    m_TemplateIdIsSet = false;
}
int32_t SDTokenGetResponse::getId() const
{
    return m_Id;
}

void SDTokenGetResponse::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool SDTokenGetResponse::idIsSet() const
{
    return m_IdIsSet;
}

void SDTokenGetResponse::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t SDTokenGetResponse::getName() const
{
    return m_Name;
}

void SDTokenGetResponse::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool SDTokenGetResponse::nameIsSet() const
{
    return m_NameIsSet;
}

void SDTokenGetResponse::unsetName()
{
    m_NameIsSet = false;
}
int32_t SDTokenGetResponse::getFlags() const
{
    return m_Flags;
}

void SDTokenGetResponse::setFlags(int32_t value)
{
    m_Flags = value;
    m_FlagsIsSet = true;
}

bool SDTokenGetResponse::flagsIsSet() const
{
    return m_FlagsIsSet;
}

void SDTokenGetResponse::unsetFlags()
{
    m_FlagsIsSet = false;
}
std::shared_ptr<SDPlayerGetInventoryResponse_props> SDTokenGetResponse::getProps() const
{
    return m_Props;
}

void SDTokenGetResponse::setProps(const std::shared_ptr<SDPlayerGetInventoryResponse_props>& value)
{
    m_Props = value;
    m_PropsIsSet = true;
}

bool SDTokenGetResponse::propsIsSet() const
{
    return m_PropsIsSet;
}

void SDTokenGetResponse::unsetProps()
{
    m_PropsIsSet = false;
}
utility::string_t SDTokenGetResponse::getOwner() const
{
    return m_Owner;
}

void SDTokenGetResponse::setOwner(const utility::string_t& value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}

bool SDTokenGetResponse::ownerIsSet() const
{
    return m_OwnerIsSet;
}

void SDTokenGetResponse::unsetOwner()
{
    m_OwnerIsSet = false;
}
std::shared_ptr<Object> SDTokenGetResponse::getPublicMetadata() const
{
    return m_PublicMetadata;
}

void SDTokenGetResponse::setPublicMetadata(const std::shared_ptr<Object>& value)
{
    m_PublicMetadata = value;
    m_PublicMetadataIsSet = true;
}

bool SDTokenGetResponse::publicMetadataIsSet() const
{
    return m_PublicMetadataIsSet;
}

void SDTokenGetResponse::unsetPublicMetadata()
{
    m_PublicMetadataIsSet = false;
}
utility::string_t SDTokenGetResponse::getBlockchainTokenId() const
{
    return m_BlockchainTokenId;
}

void SDTokenGetResponse::setBlockchainTokenId(const utility::string_t& value)
{
    m_BlockchainTokenId = value;
    m_BlockchainTokenIdIsSet = true;
}

bool SDTokenGetResponse::blockchainTokenIdIsSet() const
{
    return m_BlockchainTokenIdIsSet;
}

void SDTokenGetResponse::unsetBlockchainTokenId()
{
    m_BlockchainTokenIdIsSet = false;
}
utility::string_t SDTokenGetResponse::getBlockchainExplorerLink() const
{
    return m_BlockchainExplorerLink;
}

void SDTokenGetResponse::setBlockchainExplorerLink(const utility::string_t& value)
{
    m_BlockchainExplorerLink = value;
    m_BlockchainExplorerLinkIsSet = true;
}

bool SDTokenGetResponse::blockchainExplorerLinkIsSet() const
{
    return m_BlockchainExplorerLinkIsSet;
}

void SDTokenGetResponse::unsetBlockchainExplorerLink()
{
    m_BlockchainExplorerLinkIsSet = false;
}
}
}
}
}


