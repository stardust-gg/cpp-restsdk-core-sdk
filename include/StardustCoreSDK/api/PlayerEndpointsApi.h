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
 * PlayerEndpointsApi.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_PlayerEndpointsApi_H_
#define GG_STARDUST_CORESDK_PlayerEndpointsApi_H_



#include "StardustCoreSDK/ApiClient.h"

#include "StardustCoreSDK/model/Error.h"
#include "StardustCoreSDK/Object.h"
#include "StardustCoreSDK/model/SDPlayerCountResponse.h"
#include "StardustCoreSDK/model/SDPlayerCreateRequest.h"
#include "StardustCoreSDK/model/SDPlayerCreateResponse.h"
#include "StardustCoreSDK/model/SDPlayerGetAllResponse.h"
#include "StardustCoreSDK/model/SDPlayerGetIdResponse.h"
#include "StardustCoreSDK/model/SDPlayerGetIdsResponse.h"
#include "StardustCoreSDK/model/SDPlayerGetInventoryResponse.h"
#include "StardustCoreSDK/model/SDPlayerGetResponse.h"
#include "StardustCoreSDK/model/SDPlayerMutateRequest.h"
#include "StardustCoreSDK/model/SDPlayerWalletGetResponse.h"
#include "StardustCoreSDK/model/SDPlayerWithdrawRequest.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace gg {
namespace stardust {
namespace coresdk {

using namespace gg::stardust::coresdk::model;

class  IPlayerEndpointsApi
{
public:
    IPlayerEndpointsApi() = default;
    virtual ~IPlayerEndpointsApi() = default;

    virtual pplx::task<std::shared_ptr<SDPlayerCountResponse>> playerCountGet(
    ) const = 0;
    virtual pplx::task<std::shared_ptr<SDPlayerCreateResponse>> playerCreatePost(
        std::shared_ptr<SDPlayerCreateRequest> sDPlayerCreateRequest
    ) const = 0;
    virtual pplx::task<std::vector<std::shared_ptr<SDPlayerGetAllResponse>>> playerGetAllGet(
        boost::optional<utility::string_t> start,
        boost::optional<utility::string_t> filter,
        boost::optional<utility::string_t> limit
    ) const = 0;
    virtual pplx::task<std::shared_ptr<SDPlayerGetResponse>> playerGetGet(
        utility::string_t playerId
    ) const = 0;
    virtual pplx::task<std::shared_ptr<SDPlayerGetIdResponse>> playerGetIdGet(
        utility::string_t uniqueId
    ) const = 0;
    virtual pplx::task<std::vector<std::shared_ptr<SDPlayerGetIdsResponse>>> playerGetIdsGet(
    ) const = 0;
    virtual pplx::task<std::vector<std::shared_ptr<SDPlayerGetInventoryResponse>>> playerGetInventoryGet(
        utility::string_t playerId,
        boost::optional<utility::string_t> start,
        boost::optional<utility::string_t> tokenIds,
        boost::optional<utility::string_t> limit
    ) const = 0;
    virtual pplx::task<std::shared_ptr<Object>> playerMutatePut(
        std::shared_ptr<SDPlayerMutateRequest> sDPlayerMutateRequest
    ) const = 0;
    virtual pplx::task<std::shared_ptr<Object>> playerRemoveDelete(
        utility::string_t playerId
    ) const = 0;
    virtual pplx::task<std::shared_ptr<SDPlayerWalletGetResponse>> playerWalletGetGet(
        utility::string_t playerId
    ) const = 0;
    virtual pplx::task<std::shared_ptr<Object>> playerWithdrawPost(
        std::shared_ptr<SDPlayerWithdrawRequest> sDPlayerWithdrawRequest
    ) const = 0;
};

class  PlayerEndpointsApi  : public IPlayerEndpointsApi 
{
public:
    using Base = IPlayerEndpointsApi;

    explicit PlayerEndpointsApi( std::shared_ptr<const ApiClient> apiClient );

    ~PlayerEndpointsApi() override;

    /// <summary>
    /// Get Player Count
    /// </summary>
    /// <remarks>
    /// Get Player count within a game
    /// </remarks>
    pplx::task<std::shared_ptr<SDPlayerCountResponse>> playerCountGet(
    ) const override;
    /// <summary>
    /// Create Player
    /// </summary>
    /// <remarks>
    /// Create a Player for a game. Returns their player id which can be used to reference them later in Stardust&#39;s system
    /// </remarks>
    /// <param name="sDPlayerCreateRequest"></param>
    pplx::task<std::shared_ptr<SDPlayerCreateResponse>> playerCreatePost(
        std::shared_ptr<SDPlayerCreateRequest> sDPlayerCreateRequest
    ) const override;
    /// <summary>
    /// Get All Players
    /// </summary>
    /// <remarks>
    /// Get the List of All Players in Game
    /// </remarks>
    /// <param name="start">position in list (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="filter">Find a substring within the Player unique ID field (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="limit">maximum items returned in list (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::vector<std::shared_ptr<SDPlayerGetAllResponse>>> playerGetAllGet(
        boost::optional<utility::string_t> start,
        boost::optional<utility::string_t> filter,
        boost::optional<utility::string_t> limit
    ) const override;
    /// <summary>
    /// Get Player
    /// </summary>
    /// <remarks>
    /// Get Details of a Player Within a Game
    /// </remarks>
    /// <param name="playerId">Player id</param>
    pplx::task<std::shared_ptr<SDPlayerGetResponse>> playerGetGet(
        utility::string_t playerId
    ) const override;
    /// <summary>
    /// Get Player ID
    /// </summary>
    /// <remarks>
    /// Get a Player&#39;s ID via their Unique ID
    /// </remarks>
    /// <param name="uniqueId">Player&#39;s Unique ID</param>
    pplx::task<std::shared_ptr<SDPlayerGetIdResponse>> playerGetIdGet(
        utility::string_t uniqueId
    ) const override;
    /// <summary>
    /// Get All Player IDs
    /// </summary>
    /// <remarks>
    /// Get All Player IDs for a Given Game
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<SDPlayerGetIdsResponse>>> playerGetIdsGet(
    ) const override;
    /// <summary>
    /// Get Player Inventory
    /// </summary>
    /// <remarks>
    /// Get a players inventory and all the items it holds
    /// </remarks>
    /// <param name="playerId">Player id</param>
    /// <param name="start">position in list (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="tokenIds">Comma-Separated String of token ids (ex. &#39;3589, 3580&#39;) (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="limit">maximum items returned in list (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::vector<std::shared_ptr<SDPlayerGetInventoryResponse>>> playerGetInventoryGet(
        utility::string_t playerId,
        boost::optional<utility::string_t> start,
        boost::optional<utility::string_t> tokenIds,
        boost::optional<utility::string_t> limit
    ) const override;
    /// <summary>
    /// Mutate Player
    /// </summary>
    /// <remarks>
    /// Change player data
    /// </remarks>
    /// <param name="sDPlayerMutateRequest"></param>
    pplx::task<std::shared_ptr<Object>> playerMutatePut(
        std::shared_ptr<SDPlayerMutateRequest> sDPlayerMutateRequest
    ) const override;
    /// <summary>
    /// Remove Player
    /// </summary>
    /// <remarks>
    /// Removes (hides) a player from your game. This is not permanent.
    /// </remarks>
    /// <param name="playerId">Player Id returned from player/create a UUID, i.e. 802760b0-2bb5-4fba-9237-895ed02cf8d8</param>
    pplx::task<std::shared_ptr<Object>> playerRemoveDelete(
        utility::string_t playerId
    ) const override;
    /// <summary>
    /// Get Player Wallet
    /// </summary>
    /// <remarks>
    /// Get player&#39;s wallet within a game
    /// </remarks>
    /// <param name="playerId">Player id</param>
    pplx::task<std::shared_ptr<SDPlayerWalletGetResponse>> playerWalletGetGet(
        utility::string_t playerId
    ) const override;
    /// <summary>
    /// Withdraw From Player
    /// </summary>
    /// <remarks>
    /// Withdraw a Player&#39;s Tokens from their Stardust Wallet
    /// </remarks>
    /// <param name="sDPlayerWithdrawRequest"></param>
    pplx::task<std::shared_ptr<Object>> playerWithdrawPost(
        std::shared_ptr<SDPlayerWithdrawRequest> sDPlayerWithdrawRequest
    ) const override;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* GG_STARDUST_CORESDK_PlayerEndpointsApi_H_ */

