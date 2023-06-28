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



#include "StardustCoreSDK/model/SDPlayerGetResponse.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDPlayerGetResponse::SDPlayerGetResponse()
{
    m_PlayerId = utility::conversions::to_string_t("");
    m_PlayerIdIsSet = false;
    m_UniqueId = utility::conversions::to_string_t("");
    m_UniqueIdIsSet = false;
    m_LastSeen = utility::conversions::to_string_t("");
    m_LastSeenIsSet = false;
    m_Image = utility::conversions::to_string_t("");
    m_ImageIsSet = false;
}

SDPlayerGetResponse::~SDPlayerGetResponse()
{
}

void SDPlayerGetResponse::validate()
{
    // TODO: implement validation
}

web::json::value SDPlayerGetResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PlayerIdIsSet)
    {
        val[utility::conversions::to_string_t(U("playerId"))] = ModelBase::toJson(m_PlayerId);
    }
    if(m_UniqueIdIsSet)
    {
        val[utility::conversions::to_string_t(U("uniqueId"))] = ModelBase::toJson(m_UniqueId);
    }
    if(m_LastSeenIsSet)
    {
        val[utility::conversions::to_string_t(U("lastSeen"))] = ModelBase::toJson(m_LastSeen);
    }
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t(U("image"))] = ModelBase::toJson(m_Image);
    }

    return val;
}

bool SDPlayerGetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("playerId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("playerId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPlayerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlayerId);
            setPlayerId(refVal_setPlayerId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("uniqueId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("uniqueId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUniqueId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUniqueId);
            setUniqueId(refVal_setUniqueId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("lastSeen"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("lastSeen")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLastSeen;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLastSeen);
            setLastSeen(refVal_setLastSeen);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("image"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImage);
            setImage(refVal_setImage);
        }
    }
    return ok;
}

void SDPlayerGetResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PlayerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("playerId")), m_PlayerId));
    }
    if(m_UniqueIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("uniqueId")), m_UniqueId));
    }
    if(m_LastSeenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("lastSeen")), m_LastSeen));
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image")), m_Image));
    }
}

bool SDPlayerGetResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("playerId"))))
    {
        utility::string_t refVal_setPlayerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("playerId"))), refVal_setPlayerId );
        setPlayerId(refVal_setPlayerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("uniqueId"))))
    {
        utility::string_t refVal_setUniqueId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("uniqueId"))), refVal_setUniqueId );
        setUniqueId(refVal_setUniqueId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("lastSeen"))))
    {
        utility::string_t refVal_setLastSeen;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("lastSeen"))), refVal_setLastSeen );
        setLastSeen(refVal_setLastSeen);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("image"))))
    {
        utility::string_t refVal_setImage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image"))), refVal_setImage );
        setImage(refVal_setImage);
    }
    return ok;
}

utility::string_t SDPlayerGetResponse::getPlayerId() const
{
    return m_PlayerId;
}

void SDPlayerGetResponse::setPlayerId(const utility::string_t& value)
{
    m_PlayerId = value;
    m_PlayerIdIsSet = true;
}

bool SDPlayerGetResponse::playerIdIsSet() const
{
    return m_PlayerIdIsSet;
}

void SDPlayerGetResponse::unsetPlayerId()
{
    m_PlayerIdIsSet = false;
}
utility::string_t SDPlayerGetResponse::getUniqueId() const
{
    return m_UniqueId;
}

void SDPlayerGetResponse::setUniqueId(const utility::string_t& value)
{
    m_UniqueId = value;
    m_UniqueIdIsSet = true;
}

bool SDPlayerGetResponse::uniqueIdIsSet() const
{
    return m_UniqueIdIsSet;
}

void SDPlayerGetResponse::unsetUniqueId()
{
    m_UniqueIdIsSet = false;
}
utility::string_t SDPlayerGetResponse::getLastSeen() const
{
    return m_LastSeen;
}

void SDPlayerGetResponse::setLastSeen(const utility::string_t& value)
{
    m_LastSeen = value;
    m_LastSeenIsSet = true;
}

bool SDPlayerGetResponse::lastSeenIsSet() const
{
    return m_LastSeenIsSet;
}

void SDPlayerGetResponse::unsetLastSeen()
{
    m_LastSeenIsSet = false;
}
utility::string_t SDPlayerGetResponse::getImage() const
{
    return m_Image;
}

void SDPlayerGetResponse::setImage(const utility::string_t& value)
{
    m_Image = value;
    m_ImageIsSet = true;
}

bool SDPlayerGetResponse::imageIsSet() const
{
    return m_ImageIsSet;
}

void SDPlayerGetResponse::unsetImage()
{
    m_ImageIsSet = false;
}
}
}
}
}

